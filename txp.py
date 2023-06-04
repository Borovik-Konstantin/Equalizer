import interfaceFIR
import os
from PyQt5 import QtWidgets
from PlayerWav import PlaybackThread
from PyQt5.QtCore import Qt


class Equalizer(QtWidgets.QMainWindow, interfaceFIR.Ui_MainWindow):
    def __init__(self):
        super(Equalizer, self).__init__()
        self.mediaPlayer = None
        self.setupUi(self)

        self.t_play = None
        self.main_filter = True
        self.value_slider_list = [0] * 8
        self.textBrowser.setText("FIR Filter")
        self.textBrowser.setAlignment(Qt.AlignHCenter | Qt.AlignVCenter)
        self.textBrowserList = [self.textBrowser_2, self.textBrowser_3, self.textBrowser_4, self.textBrowser_5,
                                self.textBrowser_6, self.textBrowser_7, self.textBrowser_8, self.textBrowser_9]
        self.horizontalSliderList = [self.horizontalSlider_1, self.horizontalSlider_2,
                                     self.horizontalSlider_3, self.horizontalSlider_4,
                                     self.horizontalSlider_5, self.horizontalSlider_6,
                                     self.horizontalSlider_7, self.horizontalSlider_8
                                     ]
        self.pushButtonList = [self.pushButton_2, self.pushButton_3, self.pushButton_4]

        self.pushButton.clicked.connect(self.play)
        self.pushButton_5.clicked.connect(self.load)
        self.pushButton_6.clicked.connect(self.change_filter)
        self.listWidget.itemDoubleClicked.connect(self.play)
        self.checkBox_2.stateChanged.connect(self.delay)
        self.checkBox.stateChanged.connect(self.overdrive)
        self.setFixedSize(self.size())
        self.dir = ''

        for button in self.pushButtonList:
            button.clicked.connect(lambda value, b=button: self.stop_pause_resume(b.text()))

        for slider in self.horizontalSliderList:
            slider.valueChanged.connect(lambda value, s=slider: self.on_slider_value_changed(value, s.objectName()))

        for i in range(0, 8):
            self.textBrowserList[i].setText('0 dB')

    def change_filter(self) -> None:
        pass

    def delay(self, state: int) -> None:
        pass

    def overdrive(self, state: int) -> None:
        pass

    def on_slider_value_changed(self, value: int, slider_name: str) -> None:
        pass

    def play(self) -> None:
        item = self.listWidget.currentItem()

        if item:
            if not (self.t_play is None):
                self.t_play.stop_pause_resume('stop')

            file_name = os.path.join(self.dir, item.text())

            self.t_play = PlaybackThread(wav_path=file_name)
            self.t_play.start()

            print("Playing audio")

    def stop_pause_resume(self, button_name: str) -> None:
        if button_name == "Stop":
            print("Stopping audio")
        self.t_play.stop_pause_resume(button_name.lower())


    def load(self) -> None:
        self.listWidget.clear()
        directory = QtWidgets.QFileDialog.getExistingDirectory(self, "Select a directory")

        if directory:
            for file_name in os.listdir(directory):
                if file_name.endswith(".wav"):
                    self.listWidget.addItem(os.path.join(file_name))
            self.dir = directory


if __name__ == "__main__":
    app = QtWidgets.QApplication([])
    equalizer = Equalizer()
    equalizer.show()
    app.exec()
