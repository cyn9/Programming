import tkinter as tk

from tkinter import Label
from tkinter import LabelFrame
from tkinter import Entry

def centerWindow(width = 600, height = 600):
    ws = root.winfo_screenwidth()
    hs = root.winfo_screenheight()

    x = ws/2 - width/2
    y = hs/2 - height/2
    root.geometry('%dx%d+%d+%d' % (width, height, x, y))


root = tk.Tk("Antenna Design Tool")
root.option_add("*Font", "Arial")
root.resizable(0, 0)

antennaLen, wireRadius, numOfLoads = 0, 0, 0

centerWindow(400, 400)

antennaGeometry = LabelFrame(root,
                             text = "Antenna Geometry",
                             font = ("Arial", 12, "bold"),
                             height = 130,
                             width = 300,
                             borderwidth = 3)
antennaGeometry.pack(padx = 5,
                     pady = 5)

lbl_MonopoleLength = Label(antennaGeometry,
                           text = "Monopole Length (m) : ", 
                           padx = 3, 
                           pady = 3)

lbl_WireRadius = Label(antennaGeometry,
                       text = "Wire Radius (mm) : ", 
                       padx = 3, 
                       pady = 3)

lbl_NumberOfLoads = Label(antennaGeometry, 
                          text = "Number of loads : ",
                          padx = 3,
                          pady = 3)

txt_MonopoleLength = Entry(antennaGeometry,
                           width = 12,
                           text = "",
                           font = ('Arial', 12),
                           textvariable = antennaLen)

txt_WireRadius = Entry(antennaGeometry,
                       width = 12,
                       text = "",
                       font = ('Arial', 12),
                       textvariable = wireRadius)

txt_NumberOfLoads = Entry(antennaGeometry,
                          width = 12,
                          text = "",
                          font = ('Arial', 12),
                          textvariable = numOfLoads)

# Placement of widgets
lbl_MonopoleLength.place(x = 0, y = 5)
lbl_WireRadius.place(x = 21, y = 35)
lbl_NumberOfLoads.place(x = 33, y = 65)
txt_MonopoleLength.place(x = 165, y = 9)
txt_WireRadius.place(x = 165, y = 39)
txt_NumberOfLoads.place(x = 165, y = 69)

root.mainloop()
