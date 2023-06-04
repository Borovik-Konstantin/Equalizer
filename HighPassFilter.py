
import numpy as np

import CoffFIR


def fir_high_pass(y, sr):
    # Загрузить аудиофайл
    #audio_file = r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Remember our Summer - (NKO REMIX) with piano and violin (Tiktok ver. fixed) (256  kbps).wav'
    #y, sr = librosa.load(audio_file)

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

    #h = h.astype(np.float64)
    # h *= window

    # Нормализовать импульсную характеристику
    #h /= np.sum(h)
    #h = Coff.low_pass_23000
    #h /= np.sum(h)
    #ffiltered_audio = np.convolve(y, h, mode='same')
    h = Coff.high_pass_1000


    filtered_audio = np.convolve(y, h, mode='same')
    #filtered_audio *= 0.0001
    # Фильтровать аудио
    #filtered_audio = np.apply_along_axis(lambda x: np.convolve(x, h, mode='same'), axis=1, arr=y)
    return filtered_audio

    # Сохранить отфильтрованный сигнал в новый файл

    #sd.play(filtered_audio, sr)
    #sd.wait()


#fir_high_pass()
