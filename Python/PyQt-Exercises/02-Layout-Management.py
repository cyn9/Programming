import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QLabel
from PyQt5.QtWidgets import QLineEdit
from PyQt5.QtWidgets import QGridLayout
from PyQt5.QtWidgets import QPushButton
from PyQt5.QtWidgets import QTextEdit
from PyQt5.QtWidgets import QWidget

class LayoutExample(QWidget):
    def __init__(self):
        super().__init__()

        self.initialize()
    
    def initialize(self):
        self.m_lblUsername = QLabel("Username : ")
        self.m_lblTitle = QLabel("Title : ")
        self.m_lblMessage = QLabel("Message : ")

        self.m_txtUsername = QLineEdit("")
        self.m_txtTitle = QLineEdit("")
        self.m_txtMessage = QTextEdit("")

        self.grid = QGridLayout()
        self.grid.setSpacing(10)

        self.grid.addWidget(self.m_lblUsername, 1, 0)
        self.grid.addWidget(self.m_txtUsername, 1, 1)

        self.grid.addWidget(self.m_lblTitle, 2, 0)
        self.grid.addWidget(self.m_txtTitle, 2, 1)

        self.grid.addWidget(self.m_lblMessage, 3, 0)
        self.grid.addWidget(self.m_txtMessage, 3, 1, 4, 1)

        self.setLayout(self.grid)

        self.setGeometry(300, 300, 350, 300)
        self.setWindowTitle("Grid Layout Test")
        self.show()

def main():
    app = QApplication(sys.argv)
    window = LayoutExample()
    sys.exit(app.exec_())


if __name__ == '__main__':
    main()
