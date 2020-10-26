import tkinter as tk

from tkinter import Label
from tkinter import LabelFrame

def centerWindow(width = 600, height = 600):
    ws = root.winfo_screenwidth()
    hs = root.winfo_screenheight()

    x = ws/2 - width/2
    y = hs/2 - height/2
    root.geometry('%dx%d+%d+%d' % (width, height, x, y))


root = tk.Tk()
root.option_add("*Font", "Arial")
root.resizable(0, 0)

centerWindow(600, 600)

antennaGeometry = LabelFrame(root,
                             text = "Antenna Geometry",
                             height = 200,
                             width = 300,
                             borderwidth = 3)
antennaGeometry.pack(padx = 5,
                     pady = 5)

lbl_MonopoleLength = Label(antennaGeometry, text = "Monopole Length (m) : ")
lbl_MonopoleLength.place(x = 0, y = 5)

lbl_WireRadius = Label(antennaGeometry, text = "Wire Radius (mm) : ")
lbl_WireRadius.place(x = 0, y = 30)

lbl_NumberOfLoads = Label(antennaGeometry, text = "Number of loads : ")
lbl_NumberOfLoads.place(x = 0, y = 55)

root.mainloop()
