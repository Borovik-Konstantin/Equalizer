import os.path

import librosa
import librosa.display
import IPython
import numpy as np
import pandas as pd
import scipy
import matplotlib.pyplot as plt
import seaborn as sns
from pydub import AudioSegment

from os import path

#sound = AudioSegment.from_mp3(r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Pentatonix_-_Carol_of_the_Bells_48241946.mp3')
#sound.export(r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Pentatonix_-_Carol_of_the_Bells_48241946.mp3', format="wav")
audio_data = r'C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Kordhell_-_Murder_In_My_Mind_73962603.wav'
y, sr = librosa.load(audio_data)
print(type(y), type(sr))
#print(y)
#print(sr)
mp3_file = r"C:\Users\kosti\OneDrive\Рабочий стол\Univer\NIRS\Equalizer\Music\Remember our Summer - (NKO REMIX) with piano and violin (Tiktok ver. fixed) (256  kbps).mp3"
sound = AudioSegment.from_mp3(mp3_file)
wav_file = os.path.splitext(mp3_file)[0] + ".wav"
sound.export(wav_file, format="wav")




