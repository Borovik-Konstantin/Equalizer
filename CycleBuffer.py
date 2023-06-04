import wave
import pyaudio
from collections import deque

wav_file = wave.open(
    r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Pentatonix_-_Carol_of_the_Bells_48241946.wav',
    'rb')

p = pyaudio.PyAudio()

BUFFER_SIZE = 1024
buffer = deque(maxlen=BUFFER_SIZE)

stream = p.open(format=p.get_format_from_width(wav_file.getsampwidth()),
                channels=wav_file.getnchannels(),
                rate=wav_file.getframerate(),
                output=True)



data = wav_file.readframes(BUFFER_S)
buffer.extend(data)
while len(buffer) > 0:
    stream.write(bytes(buffer))
    #if len(buffer) < BUFFER_SIZE:
    data = wav_file.readframes(BUFFER_SIZE)
    buffer.extend(data)

stream.stop_stream()
stream.close()
p.terminate()

wav_file.close()

