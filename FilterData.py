import librosa
import pyaudio
from collections import deque
import numpy as np
import threading


class SpecialThread(threading.Thread):
    def __init__(self, wav_path):
        super(SpecialThread, self).__init__()
        self.wav_path = wav_path
        self.running = True
        self.paused = False

    def stop(self):
        self.running = False

    def pause(self):
        self.paused = True

    def resume(self):
        self.paused = False

    def run(self):

        data, sr = librosa.load(self.wav_path, sr=None, mono=False)
        BUFFER_SIZE = 4096
        FRAME_SIZE = 512

        play = pyaudio.PyAudio()
        buffer = deque(maxlen=BUFFER_SIZE)

        print(sr)
        stream = play.open(format=pyaudio.paFloat32,
                           channels=2,
                           rate=sr,
                           output=True
                           )

        print("Поток запустился")

        for i in range(0, len(data[0]), FRAME_SIZE):
            if not self.running:
                break
            if not self.paused:
                buffer.extend(data[:, i:i + FRAME_SIZE].T.reshape(-1))
                stream.write(np.array(buffer))
                print(buffer)
        print("Поток остановился")

        stream.stop_stream()
        stream.close()
        play.terminate()
