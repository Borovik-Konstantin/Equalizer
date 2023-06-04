import CoffIIR

import numpy as np
import scipy.signal as signal


def iir_filter(data: np.ndarray, filter_pass: int) -> np.ndarray:
    """Filter data with a IIR filter which defined by filter_pass

    """

    # taking numerator and denominator coefficients

    if filter_pass == 1:
        coff_num = CoffIIR.low_pass_num_sos_100_ord_20
        coff_den = CoffIIR.low_pass_den_sos_100_ord_20

    elif filter_pass == 2:
        coff_num = CoffIIR.band_pass_num_sos_101_258_ord_40
        coff_den = CoffIIR.band_pass_den_sos_101_258_ord_40
    elif filter_pass == 3:
        coff_num = CoffIIR.band_pass_num_sos_259_573_ord_40
        coff_den = CoffIIR.band_pass_den_sos_259_573_ord_40
    elif filter_pass == 4:
        coff_num = CoffIIR.band_pass_num_sos_574_1202_ord_40
        coff_den = CoffIIR.band_pass_den_sos_574_1202_ord_40
    elif filter_pass == 5:
        coff_num = CoffIIR.band_pass_num_sos_1203_2459_ord_40
        coff_den = CoffIIR.band_pass_den_sos_1203_2459_ord_40
    elif filter_pass == 6:
        coff_num = CoffIIR.band_pass_num_sos_2460_4972_ord_40
        coff_den = CoffIIR.band_pass_den_sos_2460_4972_ord_40
    elif filter_pass == 7:
        coff_num = CoffIIR.band_pass_num_sos_4973_9997_ord_40
        coff_den = CoffIIR.band_pass_den_sos_4973_9997_ord_40
    else:
        coff_num = CoffIIR.band_pass_num_sos_9998_20000_ord_40
        coff_den = CoffIIR.band_pass_den_sos_9998_20000_ord_40

    # computing a number of sections

    SECTIONS = len(coff_num)//2

    DEN = coff_den[1::2]
    NUM = np.delete(np.multiply(np.array(list(coff_num[1]) * (SECTIONS+1)).reshape(SECTIONS+1, 3),
                                coff_num[::2][:, 0].reshape(SECTIONS+1, 1)), SECTIONS, 0)
    coff = np.concatenate((NUM, DEN), axis=1)

    filtered_data = signal.sosfilt(coff, data)

    # den = CoffIIR.high_pass_den_1000_ord_12
    # num = CoffIIR.high_pass_num_1000_ord_12

    # for n in range(len(data[0])):
    # filtered_data[0][n] = sum(num[k] * data[0][n - k] for k in range(len(num)))
    # filtered_data[1][n] = sum(num[k] * data[1][n - k] for k in range(len(num)))
    # if n >= len(den):
    #   data[0][n] = sum(den[k] * data[0][n - k] for k in range(1, len(den)))
    #  data[1][n] = sum(den[k] * data[1][n - k] for k in range(1, len(den)))

    # filtered_data = signal.lfilter(num, den, data)
    # h = Coff.low_pass_23000
    # filtered_data = np.apply_along_axis(lambda x: np.convolve(x, h, mode='same'), axis=1, arr=filtered_data)
    # print(len(filtered_data))
    # filtered_data = filtered_data[:, len(num)-1:]

    return filtered_data

# data, sr = librosa.load(r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Remember our Summer - (
# NKO ' r'REMIX) with piano and violin (Tiktok ver. fixed) (256  kbps).wav') filtered_data = iir_filter(data)

# print(len(filtered_data))
