import tkinter as tk

from tkinter import Tk
from tkinter import Label
from tkinter import LabelFrame
from tkinter import Entry
from tkinter import OptionMenu
from tkinter import StringVar

appWidth = 750
appHeight = 450
labelFramePadX = 12
labelFramePadY = 2

def centerWindow(width = appWidth, height = appHeight):
    ws = root.winfo_screenwidth()
    hs = root.winfo_screenheight()

    x = ws/2 - width/2
    y = hs/2 - height/2
    root.geometry('%dx%d+%d+%d' % (width, height, x, y))

root = Tk()
root.title("Antenna Design Tool")
root.option_add("*Font", "Arial")
root.resizable(0, 0)
centerWindow(appWidth, appHeight)

# # # # # # # # # # #
# Widget Variables  #
# # # # # # # # # # #
antennaLen = StringVar(root, value = 1)
wireRadius = StringVar(root, value = 0.5)
numOfLoads = StringVar(root, value = 1)
startFreq = StringVar(root, value = 100)
stopFreq = StringVar(root, value = 500)
freqStep = StringVar(root, value = 5)
numOfSegments = StringVar(root, value = 101)

BASIS_FUNC_OPTIONS = [ "Pulse Function",
                       "Piecewise Linear",
                       "Piecewise Sinusoidal" ]

WIRE_EXCITATION_OPTIONS = [ "Delta-Gap",
                            "Magnetic Frill",
                            "Plane Wave" ]

basisFunc = StringVar(root)
basisFunc.set(BASIS_FUNC_OPTIONS[0])

wireExcitation = StringVar(root)
wireExcitation.set(WIRE_EXCITATION_OPTIONS[0])

# # # # # # # # #
# Label Frames  #
# # # # # # # # #
antennaGeometry = LabelFrame(root,
                             text = "Antenna Geometry",
                             font = ("Arial", 12, "bold"),
                             height = 115,
                             width = 325,
                             borderwidth = 3)

frequencyFrame = LabelFrame(root,
                            text = "Frequency",
                            font = ("Arial", 12, "bold"),
                            height = 115,
                            width = 325,
                            borderwidth = 3)

MoMFrame = LabelFrame(root,
                      text = "Method of Moments",
                      font = ("Arial", 12, "bold"),
                      height = 115,
                      width = 325,
                      borderwidth = 3)

# # # # # #
# Labels  #
# # # # # #
lbl_MonopoleLength = Label(antennaGeometry,
                           text = " Monopole Length (m) : ", 
                           padx = 7, 
                           pady = 3)

lbl_WireRadius = Label(antennaGeometry,
                       text = "Wire Radius (mm) : ", 
                       padx = 7, 
                       pady = 3)

lbl_NumberOfLoads = Label(antennaGeometry, 
                          text = "Number of loads : ",
                          padx = 7,
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

lbl_NumberOfSegments = Label(MoMFrame, 
                             text = "Number of segments : ",
                             padx = 3,
                             pady = 3)

lbl_BasisFunction = Label(MoMFrame, 
                          text = "Basis function : ",
                          padx = 3,
                          pady = 3)

lbl_Excitation = Label(MoMFrame, 
                       text = "Wire Excitation : ",
                       padx = 3,
                       pady = 3)

# # # # # # # #
# Text Fields #
# # # # # # # #
txt_MonopoleLength = Entry(antennaGeometry,
                           width = 14,
                           text = "",
                           justify = "center",
                           font = ('Arial', 12),
                           textvariable = antennaLen)

txt_WireRadius = Entry(antennaGeometry,
                       width = 14,
                       text = "",
                       justify = "center",
                       font = ('Arial', 12),
                       textvariable = wireRadius)

txt_NumberOfLoads = Entry(antennaGeometry,
                          width = 14,
                          text = "",
                          justify = "center",
                          font = ('Arial', 12),
                          textvariable = numOfLoads)

txt_StartFreq = Entry(frequencyFrame,
                      width = 14,
                      text = "",
                      justify = "center",
                      font = ('Arial', 12),
                      textvariable = startFreq)

txt_StopFreq = Entry(frequencyFrame,
                     width = 14,
                     text = "",
                     justify = "center",
                     font = ('Arial', 12),
                     textvariable = stopFreq)

txt_FreqStep = Entry(frequencyFrame,
                     width = 14,
                     text = "",
                     justify = "center",
                     font = ('Arial', 12),
                     textvariable = freqStep)

txt_NumberOfSegments = Entry(MoMFrame,
                             width = 14,
                             text = "",
                             justify = "center",
                             font = ('Arial', 12),
                             textvariable = numOfSegments)

# # # # # # #
# Dropdowns #
# # # # # # #
opt_BasisFunc = OptionMenu(MoMFrame,
                           basisFunc,
                           *BASIS_FUNC_OPTIONS)

opt_WireExcitation = OptionMenu(MoMFrame,
                                wireExcitation,
                                *WIRE_EXCITATION_OPTIONS)

opt_BasisFunc.config(width = 15, font = "Arial 8")
opt_WireExcitation.config(width = 15, font = "Arial 8")

# # # # # # # # # #
# Adding to Grid  #
# # # # # # # # # #
antennaGeometry.grid(row = 0, column = 0, padx = labelFramePadX, pady = labelFramePadY)
frequencyFrame.grid(row = 1, column = 0, padx = labelFramePadX, pady = labelFramePadY)
MoMFrame.grid(row = 2, column = 0, padx = labelFramePadX, pady = labelFramePadY)

lbl_MonopoleLength.grid(row = 0, column = 0, sticky = "E")
lbl_WireRadius.grid(row = 1, column = 0, sticky = "E")
lbl_NumberOfLoads.grid(row = 2, column = 0, sticky = "E")
txt_MonopoleLength.grid(row = 0, column = 1, sticky = "E")
txt_WireRadius.grid(row = 1, column = 1, sticky = "E")
txt_NumberOfLoads.grid(row = 2, column = 1, sticky = "E")

lbl_StartFreq.grid(row = 0, column = 0, sticky = "E")
lbl_StopFreq.grid(row = 1, column = 0, sticky = "E")
lbl_FreqStep.grid(row = 2, column = 0, sticky = "E")
txt_StartFreq.grid(row = 0, column = 1, sticky = "E")
txt_StopFreq.grid(row = 1, column = 1, sticky = "E")
txt_FreqStep.grid(row = 2, column = 1, sticky = "E")

txt_MonopoleLength.place(x = 178, y = 3)
txt_WireRadius.place(x = 178, y = 31)
txt_NumberOfLoads.place(x = 178, y = 58)

lbl_NumberOfSegments.grid(row = 0, column = 0, sticky = "E")
lbl_BasisFunction.grid(row = 1, column = 0, sticky = "E")
lbl_Excitation.grid(row = 2, column = 0, sticky = "E")
txt_NumberOfSegments.grid(row = 0, column = 1, sticky = "E")
opt_BasisFunc.grid(row = 1, column = 1, sticky = "E")
opt_WireExcitation.grid(row = 2, column = 1, sticky = "E")

lbl_NumberOfSegments.place(x = 10, y = 3)
lbl_BasisFunction.place(x = 56.7, y = 31)
lbl_Excitation.place(x = 49, y = 58)
txt_NumberOfSegments.place(x = 175, y = 6)
opt_BasisFunc.place(x = 173, y = 30)
opt_WireExcitation.place(x = 173, y = 58)

antennaGeometry.grid_propagate(0)
frequencyFrame.grid_propagate(0)
MoMFrame.grid_propagate(0)

root.mainloop()
