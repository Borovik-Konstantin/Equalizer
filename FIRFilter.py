import CoffFIR

import numpy as np


def fir_filter(data: np.ndarray, filter_pass: int) -> np.ndarray:
    """Filter data with a FIR filter which defined by filter_pass

    """
    # Загрузить аудиофайл
    # audio_file = r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Remember our Summer - (NKO REMIX) with piano and violin (Tiktok ver. fixed) (256  kbps).wav'
    # y, sr = librosa.load(audio_file)

    # Определить частоту среза ФНЧ и количество отсчетов импульсной характеристики
    # fc = 100  # Частота среза ФНЧ в Гц
    # num_taps = 1001  # Количество отсчетов импульсной характеристики

    # Создать окно Хемминга
    # window = np.hamming(num_taps)

    # Создать импульсную характеристику ФНЧ
    # h = np.sinc(2 * fc / sr * (np.arange(num_taps) - (num_taps - 1) / 2))
    # print(type(h[0]), h[0], h[1], h[2], h[3], h[4], h[5])
    # for i in range(num_taps):
    # print(h[i], ' ')
    # order = num_taps - 1
    # print(sr)

    # taking filter coefficients

    if filter_pass == 1:
        coff = CoffFIR.low_pass_100
    elif filter_pass == 2:
        coff = CoffFIR.band_pass_101_258
    elif filter_pass == 3:
        coff = CoffFIR.band_pass_259_573
    elif filter_pass == 4:
        coff = CoffFIR.band_pass_574_1202
    elif filter_pass == 5:
        coff = CoffFIR.band_pass_1203_2459
    elif filter_pass == 6:
        coff = CoffFIR.band_pass_2460_4972
    elif filter_pass == 7:
        coff = CoffFIR.band_pass_4973_9997
    else:
        coff = CoffFIR.band_pass_9998_20000

    # h = h.astype(np.float64)
    # h *= window

    # Нормализовать импульсную характеристику
    # h /= np.sum(h)
    # h1 = Coff.low_pass_23000
    # f = np.apply_along_axis(lambda x: np.convolve(x, h1, mode='same'), axis=1, arr=y)
    # Фильтровать аудио

    filtered_audio = np.apply_along_axis(lambda x: np.convolve(x, coff, mode='same'), axis=1, arr=data)
    # print(10**(value/20))
    # filtered_audio *= 10**(value/20)

    return filtered_audio

    # Сохранить отфильтрованный сигнал в новый файл

    # sd.play(filtered_audio, sr)
    # sd.wait()
