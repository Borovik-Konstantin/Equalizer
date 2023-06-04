import librosa
import numpy as np
import CoffIIR
from scipy import signal
import sounddevice as sd

data, sr = librosa.load(r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Remember our Summer - (NKO REMIX) with piano and violin (Tiktok ver. fixed) (256  kbps).wav', mono=True)

#sos = signal.cheby2(40, 80, 1000, 'low', analog=True, output='sos')
#print(sos)
print(CoffIIR.low_pass_num_sos_1000_m[1::2])
print(len(CoffIIR.low_pass_num_sos_1000_m[1::2]))
print(CoffIIR.low_pass_num_sos_1000_m[:-1:2][:, 0].reshape(20, 1))
print(len(CoffIIR.low_pass_num_sos_1000_m[:-1:2][:, 0].reshape(20, 1)))
NUM = np.multiply(CoffIIR.low_pass_num_sos_1000_m[1::2], CoffIIR.low_pass_num_sos_1000_m[:-1:2][:, 0].reshape(20, 1))
#NUM = np.delete(np.multiply(CoffIIR.low_pass_num_sos_1000_m[1::2].reshape(21, 3),
#                            CoffIIR.low_pass_num_sos_1000_m[::2][:, 0].reshape(21, 1)), 20, 0)

#print(NUM)
DEN = CoffIIR.low_pass_den_sos_1000_m[1::2]
#print(DEN)
coff = np.concatenate((NUM, DEN), axis=1)
#print(coff)
#print(list(CoffIIR.high_pass_num_sos_1000_ord_20[1]), '\n')
#print(NUM, '\n')
#print(DEN, '\n')
#print(coff, '\n')
filtered_data_1 = signal.sosfilt(coff, data)
#filtered_data_1 *= 1000

#NUM = np.delete(np.multiply(np.array(list(CoffIIR.band_pass_num_sos_574_1202_ord_40[1])*21).reshape(21, 3), CoffIIR.band_pass_num_sos_574_1202_ord_40[::2][:, 0].reshape(21, 1)), 20, 0)
#DEN = CoffIIR.band_pass_den_sos_574_1202_ord_40[1::2]
#coff = np.concatenate((NUM, DEN), axis=1)


#filtered_data_2 = signal.sosfilt(coff, data)

#filtered_data = filtered_data_1 + filtered_data_2

sd.play(filtered_data_1)
print('Playing ...')
sd.wait()

