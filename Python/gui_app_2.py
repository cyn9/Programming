import tkinter as tk
import tkinter as tk
from tkinter import LabelFrame

root = tk.Tk()

antennaGeometry = LabelFrame(root,
                             text = "Antenna Geometry",
                             height = 200,
                             width = 300,
                             borderwidth = 3)
antennaGeometry.pack(fill = "both", 
                     expand = "Yes",
                     padx = 5,
                     pady = 5)



root.mainloop()
