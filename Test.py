from collections import deque

import librosa
import sounddevice as sd
import numpy as np
from scipy import signal

from HighPassFilter import fir_high_pass
from FIRFilter import fir_low_pass

# загрузка моно аудиофайла
audio_file_path = r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Remember our Summer - (NKO REMIX) with piano and violin (Tiktok ver. fixed) (256  kbps).wav'
y, sr = librosa.load(audio_file_path, sr=None, mono=False)
print(sr)

BUFFER_SIZE = 262144*2
FRAME_SIZE = 131072*2
#BUFFER_SIZE = 2048
#FRAME_SIZE = 1024
buffer = deque(maxlen=BUFFER_SIZE)
# создание выходного потока
stream = sd.OutputStream(channels=2, samplerate=sr)
cutoff_freq = 20000
nyquist_freq = sr / 2
print(nyquist_freq)
cutoff_ratio = cutoff_freq / nyquist_freq
b, a = signal.butter(10, cutoff_ratio, btype='lowpass', analog=False)
y_filtered = signal.lfilter(b, a, y)
# запуск потока и воспроизведение аудиофайла
stream.start()
# frame_size=FRAME_SIZE
for i in range(0, len(y[0]), FRAME_SIZE):
    # buf = y[:, i:i+FRAME_SIZE]
    buf_filtered = fir_low_pass(y[:, i:i + FRAME_SIZE], sr)
    #buf_filtered = fir_high_pass(y[:, i:i + FRAME_SIZE], sr)
    # buf_filtered = signal.lfilter(b, a, buf)
    # print(len(buf_filtered[0]), '\n')
    # print(len(buf[0]), '\n')

    buffer.extend(buf_filtered[:, :FRAME_SIZE - 10].T.reshape(-1))
    # buffer.extend(y_filtered[:, i:i + FRAME_SIZE].T.reshape(-1))

    stream.write(np.reshape(buffer, (-1, 2)).astype(np.float32))
# stream.write(y.astype(np.float32))
stream.stop()
stream.close()
# buf = y[:, i:i+FRAME_SIZE]
# buf_filtered = signal.lfilter(b, a, buf)
# frame_size = len(buf_filtered[0])
# buffer.extend(buf_filtered[:,:FRAME_SIZE-200].T.reshape(-1))
