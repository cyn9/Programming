import sys

from PyQt5.QtWidgets import QApplication
from PyQt5.QtWidgets import QLabel
from PyQt5.QtWidgets import QLineEdit
from PyQt5.QtWidgets import QGridLayout
from PyQt5.QtWidgets import QPushButton
from PyQt5.QtWidgets import QTextEdit
from PyQt5.QtWidgets import QWidget

from PyQt5.QtGui import QFont

class LayoutExample(QWidget):
    def __init__(self):
        super().__init__()

        self.initialize()
    
    def initialize(self):
        self.font = QFont("Arial", 11)

        self.m_lblUsername  = QLabel("Username : ")
        self.m_lblTitle     = QLabel("Title : ")
        self.m_lblMessage   = QLabel("Message : ")

        self.m_txtUsername  = QLineEdit("")
        self.m_txtTitle     = QLineEdit("")
        self.m_txtMessage   = QTextEdit("")

        self.m_btnSubmit    = QPushButton("Submit")
        self.m_btnClear     = QPushButton("Clear")

        self.grid = QGridLayout()
        self.grid.setSpacing(10)

        self.m_lblUsername.setFont(self.font)
        self.m_lblTitle.setFont(self.font)
        self.m_lblMessage.setFont(self.font)
        self.m_txtUsername.setFont(self.font)
        self.m_txtTitle.setFont(self.font)
        self.m_txtMessage.setFont(self.font)
        self.m_btnSubmit.setFont(self.font)
        self.m_btnClear.setFont(self.font)

        self.grid.addWidget(self.m_lblUsername, 1, 0)
        self.grid.addWidget(self.m_txtUsername, 1, 1)

        self.grid.addWidget(self.m_lblTitle, 2, 0)
        self.grid.addWidget(self.m_txtTitle, 2, 1)

        self.grid.addWidget(self.m_lblMessage, 3, 0)
        self.grid.addWidget(self.m_txtMessage, 3, 1, 4, 1)

        self.grid.addWidget(self.m_btnClear, 8, 0)
        self.grid.addWidget(self.m_btnSubmit, 8, 1)

        self.m_btnClear.clicked.connect(self.OnButtonClearClicked)
        self.m_btnSubmit.clicked.connect(self.OnButtonSubmitClicked)

        self.setLayout(self.grid)

        self.setGeometry(300, 300, 300, 250)
        self.setWindowTitle("Grid Layout Test")
        self.show()

    def OnButtonSubmitClicked(self):
        self.userName = self.m_txtUsername.text()
        self.title = self.m_txtTitle.text()
        self.message = self.m_txtMessage.toPlainText()
        print(f"{self.title} {self.userName} sends the following message: {self.message}")

    def OnButtonClearClicked(self):
        self.m_txtUsername.setText("")
        self.m_txtTitle.setText("")
        self.m_txtMessage.setText("")


def main():
    app = QApplication(sys.argv)
    window = LayoutExample()
    sys.exit(app.exec_())


if __name__ == '__main__':
    main()
