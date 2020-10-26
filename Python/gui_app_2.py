import tkinter as tk
import tkinter as tk
from tkinter import LabelFrame

def centerWindow(width = 600, height = 600):
    ws = root.winfo_screenwidth()
    hs = root.winfo_screenheight()

    x = ws/2 - width/2
    y = hs/2 - height/2
    root.geometry('%dx%d+%d+%d' % (width, height, x, y))


root = tk.Tk()
centerWindow(600, 600)

antennaGeometry = LabelFrame(root,
                             text = "Antenna Geometry",
                             height = 200,
                             width = 300,
                             borderwidth = 3)
antennaGeometry.pack(padx = 5,
                     pady = 5)



root.mainloop()
