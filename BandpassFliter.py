import wave

import librosa
import librosa.display
import numpy as np
from scipy import signal
import sounddevice as sd
import pyaudio
from collections import deque

audio_file = r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Remember our Summer - (NKO REMIX) with piano and violin (Tiktok ver. fixed) (256  kbps).wav'

y, sr = librosa.load(audio_file, sr=None)
print(sr)

cutoff_freq = 20000
nyquist_freq = sr / 2

cutoff_ratio = cutoff_freq / nyquist_freq
b, a = signal.butter(10, cutoff_ratio, btype='lowpass', analog=False)
data_filtered = signal.lfilter(b, a, y)
print('filtered signal')

#sd.play(data_filtered, sr)
print('start_play')
#sd.wait()


data, sr = librosa.load(audio_file, sr=None)
BUFFER_SIZE = 4096
FRAME_SIZE = 65536

play = pyaudio.PyAudio()
buffer = deque(maxlen=BUFFER_SIZE)

cutoff_freq = 1000
order = 10
b, a = signal.cheby1(order, 1, cutoff_freq/(sr/2), 'low', analog=False)



print(sr)
stream = play.open(format=pyaudio.paFloat32,
                   channels=1,
                   rate=sr,
                   output=True
                   )

print("Поток запустился")

for i in range(0, len(data), FRAME_SIZE):
    buffer.extend(data[i:i + FRAME_SIZE])
    filtered_data = signal.filtfilt(b, a,data)
    stream.write(np.array(filtered_data))
    print(buffer)
    buffer.clear()

print("Поток остановился")

stream.stop_stream()
stream.close()
play.terminate()
