import tkinter as tk

from tkinter import Label
from tkinter import LabelFrame
from tkinter import Entry

appWidth = 350
appHeight = 400

def centerWindow(width = appWidth, height = appHeight):
    ws = root.winfo_screenwidth()
    hs = root.winfo_screenheight()

    x = ws/2 - width/2
    y = hs/2 - height/2
    root.geometry('%dx%d+%d+%d' % (width, height, x, y))


root = tk.Tk()
root.title("Antenna Design Tool")
root.option_add("*Font", "Arial")
root.resizable(0, 0)

antennaLen = tk.StringVar()
wireRadius = tk.StringVar()
numOfLoads = tk.StringVar()
startFreq = tk.StringVar()
stopFreq = tk.StringVar()
freqStep = tk.StringVar()

centerWindow(appWidth, appHeight)

# # # # # # # # #
# Label frames  #
# # # # # # # # #
antennaGeometry = LabelFrame(root,
                             text = "Antenna Geometry",
                             font = ("Arial", 12, "bold"),
                             height = 130,
                             width = 300,
                             borderwidth = 3)
antennaGeometry.pack(padx = 5,
                     pady = 5)

frequencyFrame = LabelFrame(root,
                            text = "Frequency",
                            font = ("Arial", 12, "bold"),
                            height = 130,
                            width = 300,
                            borderwidth = 3)
frequencyFrame.pack(padx = 5,
                     pady = 5)

# # # # # #
# Labels  #
# # # # # #
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

lbl_StartFreq = Label(frequencyFrame,
                      text = "Start Frequency (MHz) : ", 
                      padx = 3, 
                      pady = 3)

lbl_StopFreq = Label(frequencyFrame,
                     text = "Stop Frequency (MHz) : ", 
                     padx = 3, 
                     pady = 3)

lbl_FreqStep = Label(frequencyFrame,
                     text = "Frequency Step (MHz) : ", 
                     padx = 3, 
                     pady = 3)

# # # # # # # #
# Text Fields #
# # # # # # # #
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

txt_StartFreq = Entry(frequencyFrame,
                      width = 12,
                      text = "",
                      font = ('Arial', 12),
                      textvariable = startFreq)

txt_StopFreq = Entry(frequencyFrame,
                     width = 12,
                     text = "",
                     font = ('Arial', 12),
                     textvariable = stopFreq)

txt_FreqStep = Entry(frequencyFrame,
                     width = 12,
                     text = "",
                     font = ('Arial', 12),
                     textvariable = freqStep)

# # # # # # # # # # # # #
# Placement of widgets  #
# # # # # # # # # # # # #
lbl_MonopoleLength.place(x = 0, y = 5)
lbl_WireRadius.place(x = 21, y = 35)
lbl_NumberOfLoads.place(x = 33, y = 65)
txt_MonopoleLength.place(x = 172, y = 9)
txt_WireRadius.place(x = 172, y = 39)
txt_NumberOfLoads.place(x = 172, y = 69)

lbl_StartFreq.place(x = 0, y = 5)
lbl_StopFreq.place(x = 0, y = 35)
lbl_FreqStep.place(x = -0.4, y = 65)
txt_StartFreq.place(x = 172, y = 9)
txt_StopFreq.place(x = 172, y = 39)
txt_FreqStep.place(x = 172, y = 69)

root.mainloop()
