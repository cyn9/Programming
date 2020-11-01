from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QMainWindow

import sys
import numpy as np

from PyQt5.QtChart import QChart
from PyQt5.QtChart import QChartView
from PyQt5.QtChart import QLineSeries

from PyQt5.QtCore import QPointF
from PyQt5.QtCore import Qt

from PyQt5.QtGui import QPainter

class Window(QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("PyQtChart Demo")
        self.setGeometry(100, 100, 680, 500)

        self.show()
        self.createLineChart()


    def createLineChart(self):
        series = QLineSeries(self)
        x = np.arange(0, 3 * np.pi, 0.1)

        for i in x:
            series.append(i, np.sin(i))

        chart = QChart()        
        chart.addSeries(series)
        chart.createDefaultAxes()
        chart.setAnimationOptions(QChart.SeriesAnimations)
        chart.setTitle("Line Chart Demo")

        chart.legend().setVisible(True)
        chart.legend().setAlignment(Qt.AlignBottom)

        chartview = QChartView(chart)
        chartview.setRenderHint(QPainter.Antialiasing)

        self.setCentralWidget(chartview)


App = QApplication(sys.argv)
window = Window()
sys.exit(App.exec_())
