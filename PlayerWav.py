import threading
import time
import librosa

import sounddevice as sd
import numpy as np

from collections import deque
from FIRFilter import fir_filter
from IIRFilter import iir_filter


class PlaybackThread(threading.Thread):
    """A playback player for a track

    """

    def __init__(self, wav_path: str, slider_value: int, filter_pass: int,
                 sleep: float, main_audio: bool, main_filter: bool) -> None:
        """Parameters: wav_path is a path to the audio file
        slider_value determines volume of the track
        filter_pass determines a filter band
        sleep determines the delay of the track
        main_audio is true for main tracks and false for secondary tracks with delay
        main_filter is true for FIR filter and false for IIR filter

        """

        super(PlaybackThread, self).__init__()
        self.slider_value = slider_value
        self.wav_path = wav_path
        self.running = True
        self.paused = False
        self.filter_pass = filter_pass
        self.sleep = sleep
        self.main_audio = main_audio
        self.delay = False
        self.overdrive = False
        self.main_filter = main_filter


    def change_filter(self) -> None:
        """if main_filter is true, using FIR filter
        if main_filter is false, using IIR filter

        """
        self.main_filter = not self.main_filter

    def delay_effect(self, state: int) -> None:
        """if state is equal 2, then delay effect is applied
                 if state is equal 0, then delay effect doesn't apply

                 """
        self.delay = bool(state)
        print(self.delay)

    def overdrive_effect(self, state: int) -> None:
        """if state is equal 2, then overdrive effect is applied
         if state is equal 0, then overdrive effect doesn't apply

         """
        self.overdrive = bool(state)
        print('here')

    def set_slider_value(self, value: int) -> None:
        """value determines the volume of the track

        """
        self.slider_value = value

    def stop_pause_resume(self, event_name: str) -> None:
        """if event_name is 'stop', track will be stopped,
            if event_name is 'pause', track will be paused,
            if event_name is 'resume', track will be resumed.

        """

        if event_name == 'stop':
            self.running = False
        elif event_name == 'pause':
            self.paused = True
        else:
            self.paused = False

    def run(self) -> None:

        data, sr = librosa.load(self.wav_path, sr=None, mono=False)
        # data, sr = librosa.load(self.wav_path, sr=None, mono=False)
        # BUFFER_SIZE = 4096
        # FRAME_SIZE = 512

        # play = pyaudio.PyAudio()
        # buffer = deque(maxlen=BUFFER_SIZE)

        #print(sr)
        # stream = play.open(format=pyaudio.paFloat32,
        # channels=2,
        # rate=sr,
        # output=True
        # )
        # for i in range(0, len(data[0]), FRAME_SIZE):
        # if not self.running:
        # break
        # if not self.paused:
        # buffer.extend(data[:, i:i + FRAME_SIZE].T.reshape(-1))
        # stream.write(np.array(buffer))
        # print(buffer)
        # print("Поток остановился")

        # stream.stop_stream()
        # stream.close()
        # play.terminate()

        # загрузка моно аудиофайла

        # print(sr)

        BUFFER_SIZE = 262144 // 2
        FRAME_SIZE = 131072 // 2

        buffer = deque(maxlen=BUFFER_SIZE)  # creating a buffer

        stream = sd.OutputStream(channels=2, samplerate=sr)  # making output stream

        time.sleep(self.sleep)  # delay for secondary streams

        # cutoff_freq = 20000
        # nyquist_freq = sr / 2
        # print(nyquist_freq)
        # cutoff_ratio = cutoff_freq / nyquist_freq
        # b, a = signal.butter(10, cutoff_ratio, btype='lowpass', analog=False)
        # y_filtered = iir_filter(data)

        stream.start()

        i = 0
        while i < len(data[0]):

            if not self.running:
                break
            if not self.paused:
                # filtering data for buffer
                if self.main_filter:
                    buf_filtered = fir_filter(data[:, i:i + FRAME_SIZE], self.filter_pass)
                    # buf = y[:, i:i+FRAME_SIZE]
                    # buf_filtered = fir_filter_stereo(data[:, i:i + FRAME_SIZE], sr)
                else:
                    buf_filtered = iir_filter(data[:, i:i + FRAME_SIZE], self.filter_pass)
                # buf_filtered = fir_high_pass(data[i:i + FRAME_SIZE], sr)
                # buf_filtered = fir_high_pass(y[:, i:i + FRAME_SIZE], sr)
                # buf_filtered = signal.lfilter(b, a, buf)
                # print(len(buf_filtered[0]), '\n')
                # print(len(buf[0]), '\n')
                if not self.main_audio and self.delay:
                    buf_filtered *= 10 ** (self.slider_value / 20)  # making delay effect
                elif not self.main_audio and not self.delay:
                    buf_filtered *= 10 ** (-4)  # no delay effect
                else:
                    buf_filtered *= 10 ** (self.slider_value / 20)  # adjusting the volume
                if self.overdrive:
                    # making overdrive effect
                    buf_filtered = np.where(np.abs(buf_filtered) > 0.5,
                                            np.sign(buf_filtered) * (1 + 10 * (np.abs(buf_filtered) - 0.5)),
                                            buf_filtered)
                # buffer.extend(buf_filtered[:, :FRAME_SIZE].T.reshape(-1))

                # buf_filtered = y_filtered[:, i: i+FRAME_SIZE]*10**(self.slider_value/20)
                buffer.extend(buf_filtered.T.reshape(-1))  # filling the buffer
                stream.write(np.reshape(buffer, (-1, 2)).astype(np.float32))
                # buffer.extend(buf_filtered.T)
                # stream.write(np.reshape(buffer, -1).astype(np.float32))
                i += FRAME_SIZE

        stream.stop()
        stream.close()
        # stream.write(y.astype(np.float32)
        # buf = y[:, i:i+FRAME_SIZE]
        # buf_filtered = signal.lfilter(b, a, buf)
        # frame_size = len(buf_filtered[0])
        # buffer.extend(buf_filtered[:,:FRAME_SIZE-200].T.reshape(-1))
