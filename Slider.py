from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QSlider


class SpecialSlider(QSlider):
    def __init__(self, id):
        super(SpecialSlider, self).__init__()
        self.id = id

    def valueChanged(self, value, id):  # real signature unknown; restored from __doc__
        """ valueChanged(self, value: int) [signal] """
        pass
