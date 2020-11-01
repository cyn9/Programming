from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QDesktopWidget
from PyQt5.QtWidgets import QMainWindow

import sys
import numpy as np

from PyQt5.Qt import QPen

from PyQt5.QtChart import QCategoryAxis
from PyQt5.QtChart import QChart
from PyQt5.QtChart import QChartView
from PyQt5.QtChart import QLineSeries

from PyQt5.QtCore import Qt

from PyQt5.QtGui import QBrush
from PyQt5.QtGui import QColor
from PyQt5.QtGui import QFont
from PyQt5.QtGui import QPainter

class Window(QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("PyQtChart Demo")
        self.setGeometry(500, 275, 650, 500)
        

        self.show()
        self.createLineChart()

    def createLineChart(self):
        self.font = QFont("Arial")
        self.font.setPixelSize(16)
        self.font.setBold(True)

        self.axisLabelFont = QFont("Arial")
        self.axisLabelFont.setPixelSize(14)
        self.axisLabelFont.setBold(True)

        self.pen = QPen(QColor(0, 153, 0))
        self.pen.setWidth(3)

        self.axisPen = QPen(QColor(0, 0, 0))
        self.axisPen.setWidth(2)
        
        self.series = QLineSeries(self)
        self.series.setPen(self.pen)

        self.x = np.arange(0, 2 * np.pi, 0.01)

        for i in self.x:
            self.series.append(i, np.sin(i))

        self.xAxis = QCategoryAxis()
        self.yAxis = QCategoryAxis()

        self.xAxis.setLabelsFont(self.axisLabelFont)
        self.yAxis.setLabelsFont(self.axisLabelFont)

        self.xAxis.setLinePen(self.axisPen)
        self.yAxis.setLinePen(self.axisPen)

        self.chart = QChart()        
        self.chart.addSeries(self.series)
        self.chart.createDefaultAxes()
        self.chart.setAnimationOptions(QChart.SeriesAnimations)
        self.chart.setTitleFont(self.font)
        self.chart.setTitleBrush(QBrush(Qt.blue))
        self.chart.setTitle("Line Chart Demo")
        
        self.chart.legend().setVisible(True)
        self.chart.legend().setAlignment(Qt.AlignBottom)

        self.chart.addAxis(self.xAxis, Qt.AlignBottom)
        self.chart.addAxis(self.yAxis, Qt.AlignLeft)

        self.chartview = QChartView(self.chart)
        self.chartview.setRenderHint(QPainter.Antialiasing)

        self.setCentralWidget(self.chartview)


App = QApplication(sys.argv)
window = Window()
sys.exit(App.exec_())
