import tkinter as tk

from tkinter import Label
from tkinter import LabelFrame
from tkinter import Entry
from tkinter import OptionMenu

appWidth = 800
appHeight = 750
labelFramePadX = 6
labelFramePadY = 2

def centerWindow(width = appWidth, height = appHeight):
    ws = root.winfo_screenwidth()
    hs = root.winfo_screenheight()

    x = ws/2 - width/2
    y = hs/2 - height/2
    root.geometry('%dx%d+%d+%d' % (width, height, x, y))


def show(_=None):
    print("Selected value :", optimizerFunc.get())


root = tk.Tk()
root.title("Antenna Design Tool")
root.option_add("*Font", "Arial")
root.resizable(0, 0)
centerWindow(appWidth, appHeight)

# # # # # # # # # # #
# Widget Variables  #
# # # # # # # # # # #
BASIS_FUNC_OPTIONS = [ "Pulse Function",
                       "Piecewise Linear",
                       "Piecewise Sine" ]

WIRE_EXCITATION_OPTIONS = [ "Delta-Gap",
                            "Magnetic Frill",
                            "Plane Wave" ]

OPTIMIZER_OPTIONS = [ "Fmincon",
                      "Minimax Algorithm",
                      "Simplex Optimizer",
                      "Genetic Algorithm (GA)" ]

SIM_DISPLAY_OPTIONS = [ "Off",
                        "Iteration",
                        "Iteration-Detailed",
                        "Notify",
                        "Notify-Detailed",
                        "Final",
                        "Final-Detailed" ]

FMINCON_ALGORITHMS = [ "Active-Set",
                       "Interior-Point",
                       "SQP" ]

antennaLen = tk.StringVar(root, value = 1)
wireRadius = tk.StringVar(root, value = 0.5)
numOfLoads = tk.StringVar(root, value = 1)
startFreq = tk.StringVar(root, value = 100)
stopFreq = tk.StringVar(root, value = 500)
freqStep = tk.StringVar(root, value = 5)
numOfSegments = tk.StringVar(root, value = 101)

basisFunc = tk.StringVar(root)
basisFunc.set(BASIS_FUNC_OPTIONS[0])

wireExcitation = tk.StringVar(root)
wireExcitation.set(WIRE_EXCITATION_OPTIONS[0])

minR = tk.StringVar(root, value = 1)
maxR = tk.StringVar(root, value = 10000)
minL = tk.StringVar(root, value = 0.01)
maxL = tk.StringVar(root, value = 10)
minC = tk.StringVar(root, value = 1)
maxC = tk.StringVar(root, value = 10000)

desiredGain = tk.StringVar(root, value = 0)
desiredVSWR = tk.StringVar(root, value = 2)
chZ0 = tk.StringVar(root, value = 50)

optimizerFunc = tk.StringVar(root)
optimizerFunc.set(OPTIMIZER_OPTIONS[0])

fminconDisplay = tk.StringVar(root)
fminconDisplay.set(SIM_DISPLAY_OPTIONS[1])

maxFunEval = tk.StringVar(root, value = 10000)
maxIter = tk.StringVar(root, value = 100)
tolFun = tk.StringVar(root, value = 0.001)

fminconAlgo = tk.StringVar(root)
fminconAlgo.set(FMINCON_ALGORITHMS[0])

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

frameMoM = LabelFrame(root,
                      text = "Method of Moments",
                      font = ("Arial", 12, "bold"),
                      height = 115,
                      width = 325,
                      borderwidth = 3)

passiveBounds = LabelFrame(root,
                           text = "Bounds of Passives",
                           font = ("Arial", 12, "bold"),
                           height = 203,
                           width = 325,
                           borderwidth = 3)

designGoals = LabelFrame(root,
                         text = "Design Goals",
                         font = ("Arial", 12, "bold"),
                         height = 115,
                         width = 325,
                         borderwidth = 3)

optimizerFrame = LabelFrame(root,
                            text = "Optimizer",
                            font = ("Arial", 12, "bold"),
                            height = 62,
                            width = 325,
                            borderwidth = 3)

fminconSettings = LabelFrame(root,
                             text = "Fmincon Settings",
                             font = ("Arial", 12, "bold"),
                             height = 234.3,
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

lbl_NumberOfSegments = Label(frameMoM, 
                             text = "Number of segments : ",
                             padx = 3,
                             pady = 3)

lbl_BasisFunction = Label(frameMoM, 
                          text = "Basis function : ",
                          padx = 3,
                          pady = 3)

lbl_Excitation = Label(frameMoM, 
                       text = "Wire Excitation : ",
                       padx = 3,
                       pady = 3)

lbl_MinR = Label(passiveBounds, 
                 text = "Minimum R (Ohm) : ",
                 padx = 3,
                 pady = 3)

lbl_MaxR = Label(passiveBounds, 
                 text = "Maximum R (Ohm) : ",
                 padx = 3,
                 pady = 3)

lbl_MinL = Label(passiveBounds, 
                 text = "Minimum L (uH) : ",
                 padx = 3,
                 pady = 3)

lbl_MaxL = Label(passiveBounds, 
                 text = "Maximum L (uH) : ",
                 padx = 3,
                 pady = 3)

lbl_MinC = Label(passiveBounds, 
                 text = "Minimum C (pF) : ",
                 padx = 3,
                 pady = 3)

lbl_MaxC = Label(passiveBounds, 
                 text = "Maximum C (pF) : ",
                 padx = 3,
                 pady = 3)

lbl_Gain = Label(designGoals, 
                 text = "Desired Gain (dB) : ",
                 padx = 3,
                 pady = 3)

lbl_VSWR = Label(designGoals, 
                 text = "Desired VSWR : ",
                 padx = 3,
                 pady = 3)

lbl_Z0 = Label(designGoals, 
               text = "Char. Imp. (Ohm) : ",
               padx = 3,
               pady = 3)

lbl_Display = Label(fminconSettings, 
                    text = "Sim. Display : ",
                    padx = 3,
                    pady = 3)

lbl_MaxFunEval = Label(fminconSettings, 
                       text = "Max. Fun. Eval : ",
                       padx = 3,
                       pady = 3)

lbl_MaxIter = Label(fminconSettings, 
                    text = "Max. Iteration : ",
                    padx = 3,
                    pady = 3)

lbl_TolFun = Label(fminconSettings, 
                   text = "Tol. Function : ",
                   padx = 3,
                   pady = 3)

lbl_FminconAlgo = Label(fminconSettings, 
                        text = "Algorithm : ",
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

txt_NumberOfSegments = Entry(frameMoM,
                             width = 14,
                             text = "",
                             justify = "center",
                             font = ('Arial', 12),
                             textvariable = numOfSegments)

txt_MinR = Entry(passiveBounds,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = minR)

txt_MaxR = Entry(passiveBounds,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = maxR)

txt_MinL = Entry(passiveBounds,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = minL)

txt_MaxL = Entry(passiveBounds,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = maxL)

txt_MinC = Entry(passiveBounds,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = minC)

txt_MaxC = Entry(passiveBounds,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = maxC)

txt_Gain = Entry(designGoals,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = desiredGain)

txt_VSWR = Entry(designGoals,
                 width = 14,
                 text = "",
                 justify = "center",
                 font = ('Arial', 12),
                 textvariable = desiredVSWR)

txt_Z0 = Entry(designGoals,
               width = 14,
               text = "",
               justify = "center",
               font = ('Arial', 12),
               textvariable = chZ0)

txt_MaxFunEval = Entry(fminconSettings,
                       width = 14,
                       text = "",
                       justify = "center",
                       font = ('Arial', 12),
                       textvariable = maxFunEval)

txt_MaxIter = Entry(fminconSettings,
                    width = 14,
                    text = "",
                    justify = "center",
                    font = ('Arial', 12),
                    textvariable = maxIter)

txt_TolFun = Entry(fminconSettings,
                   width = 14,
                   text = "",
                   justify = "center",
                   font = ('Arial', 12),
                   textvariable = tolFun)

# # # # # # #
# Dropdowns #
# # # # # # #
opt_BasisFunc = OptionMenu(frameMoM,
                           basisFunc,
                           *BASIS_FUNC_OPTIONS)

opt_WireExcitation = OptionMenu(frameMoM,
                                wireExcitation,
                                *WIRE_EXCITATION_OPTIONS)

opt_Optimizer = OptionMenu(optimizerFrame,
                           optimizerFunc,
                           command = show,
                           *OPTIMIZER_OPTIONS)

opt_fminconDisplay = OptionMenu(fminconSettings,
                                fminconDisplay,
                                *SIM_DISPLAY_OPTIONS)

opt_fminconAlgorithm = OptionMenu(fminconSettings, 
                                  fminconAlgo,
                                  *FMINCON_ALGORITHMS)

opt_BasisFunc.config(width = 15, font = "Arial 8 bold")
opt_WireExcitation.config(width = 15, font = "Arial 8 bold")
opt_Optimizer.config(width = 43, font = "Arial 8 bold")
opt_fminconDisplay.config(width = 15, font = "Arial 8 bold")
opt_fminconAlgorithm.config(width = 15, font = "Arial 8 bold")

# # # # # # # # # #
# Adding to Grid  #
# # # # # # # # # #
antennaGeometry.grid(row = 0, column = 0, padx = labelFramePadX, pady = labelFramePadY)
frequencyFrame.grid(row = 1, column = 0, padx = labelFramePadX, pady = labelFramePadY)
frameMoM.grid(row = 2, column = 0, padx = labelFramePadX, pady = labelFramePadY)
passiveBounds.grid(row = 3, column = 0, padx = labelFramePadX, pady = labelFramePadY)
designGoals.grid(row = 4, column = 0, padx = labelFramePadX, pady = labelFramePadY)
optimizerFrame.grid(row = 5, column = 0, padx = labelFramePadX, pady = labelFramePadY)
fminconSettings.grid(row = 0, column = 1, padx = labelFramePadX, pady = labelFramePadY, rowspan = 2)

lbl_MonopoleLength.grid(row = 0, column = 0, sticky = "E")
lbl_WireRadius.grid(row = 1, column = 0, sticky = "E")
lbl_NumberOfLoads.grid(row = 2, column = 0, sticky = "E")

txt_MonopoleLength.place(x = 178, y = 3)
txt_WireRadius.place(x = 178, y = 31)
txt_NumberOfLoads.place(x = 178, y = 58)

lbl_StartFreq.grid(row = 0, column = 0, sticky = "E")
lbl_StopFreq.grid(row = 1, column = 0, sticky = "E")
lbl_FreqStep.grid(row = 2, column = 0, sticky = "E")
txt_StartFreq.grid(row = 0, column = 1, sticky = "E")
txt_StopFreq.grid(row = 1, column = 1, sticky = "E")
txt_FreqStep.grid(row = 2, column = 1, sticky = "E")

lbl_NumberOfSegments.place(x = 10, y = 3)
lbl_BasisFunction.place(x = 56.7, y = 31)
lbl_Excitation.place(x = 49, y = 58)
txt_NumberOfSegments.place(x = 178, y = 6)
opt_BasisFunc.place(x = 176.2, y = 30)
opt_WireExcitation.place(x = 176.2, y = 58)

lbl_MinR.place(x = 29, y = 3)
lbl_MaxR.place(x = 24.5, y = 31)
lbl_MinL.place(x = 45, y = 59)
lbl_MaxL.place(x = 40.5, y = 87)
lbl_MinC.place(x = 42, y = 115)
lbl_MaxC.place(x = 37.5, y = 143)
txt_MinR.place(x = 178, y = 7)
txt_MaxR.place(x = 178, y = 35)
txt_MinL.place(x = 178, y = 63)
txt_MaxL.place(x = 178, y = 91)
txt_MinC.place(x = 178, y = 119)
txt_MaxC.place(x = 178, y = 147)

lbl_Gain.place(x = 27, y = 3)
lbl_VSWR.place(x = 45.5, y = 31)
lbl_Z0.place(x = 36, y = 59)
txt_Gain.place(x = 178, y = 7)
txt_VSWR.place(x = 178, y = 35)
txt_Z0.place(x = 178, y = 63)

opt_Optimizer.grid(row = 0, column = 0, sticky = "E")
opt_Optimizer.place(x = 8, y = 2)

lbl_Display.place(x = 64, y = 3)
lbl_MaxFunEval.place(x = 51, y = 31)
lbl_MaxIter.place(x = 59.5, y = 59)
lbl_TolFun.place(x = 63.2, y = 87)
lbl_FminconAlgo.place(x = 85, y = 115)

opt_fminconDisplay.place(x = 176, y = 2)
txt_MaxFunEval.place(x = 178, y = 35)
txt_MaxIter.place(x = 178, y = 63)
txt_TolFun.place(x = 178, y = 91)
opt_fminconAlgorithm.place(x = 176, y = 115)

antennaGeometry.grid_propagate(0)
frequencyFrame.grid_propagate(0)
frameMoM.grid_propagate(0)
passiveBounds.grid_propagate(0)
designGoals.grid_propagate(0)
optimizerFrame.grid_propagate(0)
fminconSettings.grid_propagate(0)

root.mainloop()
