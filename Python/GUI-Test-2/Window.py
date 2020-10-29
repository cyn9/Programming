import tkinter as tk

class Window:
    n = 0
    appWidth = 800
    appHeight = 750
    
    ''' Init function '''
    def __init__(self, root):
        self.root = root
        self.root.title = "Antenna Design Tool"
        self.root.option_add("*Font", "Arial")
        self.root.resizable(0, 0)
        self.centerWindow(800, 750)

        self.root.mainloop()

    ''' Starting window at the center of the screen '''
    def centerWindow(self, width = appWidth, height = appHeight):
        ws = self.root.winfo_screenwidth()
        hs = self.root.winfo_screenheight()

        x = ws/2 - width/2
        y = hs/2 - height/2
        self.root.geometry('%dx%d+%d+%d' % (width, height, x, y))
