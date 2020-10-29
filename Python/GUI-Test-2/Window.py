import tkinter as tk

''' OptionMenu Lists '''
BASIS_FUNC_OPTIONS = ["Pulse Function",
                      "Piecewise Linear",
                      "Piecewise Sine"]

WIRE_EXCITATION_OPTIONS = ["Delta-Gap",
                           "Magnetic Frill",
                           "Plane Wave"]

OPTIMIZER_OPTIONS = ["Fmincon",
                     "Minimax Algorithm",
                     "Simplex Optimizer",
                     "Genetic Algorithm (GA)"]

SIM_DISPLAY_OPTIONS = ["Off",
                       "Iteration",
                       "Iteration-Detailed",
                       "Notify",
                       "Notify-Detailed",
                       "Final",
                       "Final-Detailed"]

FMINCON_ALGORITHMS = ["Active-Set",
                      "Interior-Point",
                      "SQP"]


class Window:
    appWidth = 800
    appHeight = 750

    ''' Init function '''

    def __init__(self, root):
        ''' Class Variables '''
        self.labelFramePadX = 6
        self.labelFramePadY = 2

        ''' Widget Variables '''
        self.antennaLen = tk.StringVar(root, value=1)
        self.wireRadius = tk.StringVar(root, value=0.5)
        self.numOfLoads = tk.StringVar(root, value=1)
        self.startFreq = tk.StringVar(root, value=100)
        self.stopFreq = tk.StringVar(root, value=500)
        self.freqStep = tk.StringVar(root, value=5)
        self.numOfSegments = tk.StringVar(root, value=101)

        self.basisFunc = tk.StringVar(root)
        self.basisFunc.set(BASIS_FUNC_OPTIONS[0])

        self.wireExcitation = tk.StringVar(root)
        self.wireExcitation.set(WIRE_EXCITATION_OPTIONS[0])

        self.minR = tk.StringVar(root, value=1)
        self.maxR = tk.StringVar(root, value=10000)
        self.minL = tk.StringVar(root, value=0.01)
        self.maxL = tk.StringVar(root, value=10)
        self.minC = tk.StringVar(root, value=1)
        self.maxC = tk.StringVar(root, value=10000)

        self.desiredGain = tk.StringVar(root, value=0)
        self.desiredVSWR = tk.StringVar(root, value=2)
        self.chZ0 = tk.StringVar(root, value=50)

        self.optimizerFunc = tk.StringVar(root)
        self.optimizerFunc.set(OPTIMIZER_OPTIONS[0])

        self.fminconDisplay = tk.StringVar(root)
        self.fminconDisplay.set(SIM_DISPLAY_OPTIONS[1])

        self.maxFunEval = tk.StringVar(root, value=10000)
        self.maxIter = tk.StringVar(root, value=100)
        self.tolFun = tk.StringVar(root, value=0.001)

        self.fminconAlgo = tk.StringVar(root)
        self.fminconAlgo.set(FMINCON_ALGORITHMS[0])

        ''' Root Properties '''
        self.root = root
        self.root.title("Antenna Design Tool")
        self.root.option_add("*Font", "Arial")
        self.root.resizable(0, 0)
        self.centerWindow()

        ''' Panel Definitions '''
        self.antennaGeometry = tk.LabelFrame(root,
                                             text="Antenna Geometry",
                                             font=("Arial", 12, "bold"),
                                             height=115,
                                             width=325,
                                             borderwidth=3)

        self.frequencyFrame = tk.LabelFrame(root,
                                            text="Frequency",
                                            font=("Arial", 12, "bold"),
                                            height=115,
                                            width=325,
                                            borderwidth=3)

        self.frameMoM = tk.LabelFrame(root,
                                      text="Method of Moments",
                                      font=("Arial", 12, "bold"),
                                      height=115,
                                      width=325,
                                      borderwidth=3)

        self.passiveBounds = tk.LabelFrame(root,
                                           text="Bounds of Passives",
                                           font=("Arial", 12, "bold"),
                                           height=203,
                                           width=325,
                                           borderwidth=3)

        self.designGoals = tk.LabelFrame(root,
                                         text="Design Goals",
                                         font=("Arial", 12, "bold"),
                                         height=115,
                                         width=325,
                                         borderwidth=3)

        self.optimizerFrame = tk.LabelFrame(root,
                                            text="Optimizer",
                                            font=("Arial", 12, "bold"),
                                            height=62,
                                            width=325,
                                            borderwidth=3)

        self.fminconSettings = tk.LabelFrame(root,
                                             text="Fmincon Settings",
                                             font=("Arial", 12, "bold"),
                                             height=234.3,
                                             width=325,
                                             borderwidth=3)

        ''' LABELS '''
        ''' Labels in Monopole Length Panel '''
        self.lbl_MonopoleLength = tk.Label(self.antennaGeometry,
                                           text=" Monopole Length (m) : ",
                                           padx=7,
                                           pady=3)

        self.lbl_WireRadius = tk.Label(self.antennaGeometry,
                                       text="Wire Radius (mm) : ",
                                       padx=7,
                                       pady=3)

        self.lbl_NumberOfLoads = tk.Label(self.antennaGeometry,
                                          text="Number of loads : ",
                                          padx=7,
                                          pady=3)

        ''' Labels in Frequency Panel '''
        self.lbl_StartFreq = tk.Label(self.frequencyFrame,
                                      text="Start Frequency (MHz) : ",
                                      padx=3,
                                      pady=3)

        self.lbl_StopFreq = tk.Label(self.frequencyFrame,
                                     text="Stop Frequency (MHz) : ",
                                     padx=3,
                                     pady=3)

        self.lbl_FreqStep = tk.Label(self.frequencyFrame,
                                     text="Frequency Step (MHz) : ",
                                     padx=3,
                                     pady=3)

        ''' Labels in MoM Panel '''
        self.lbl_NumberOfSegments = tk.Label(self.frameMoM,
                                             text="Number of segments : ",
                                             padx=3,
                                             pady=3)

        self.lbl_BasisFunction = tk.Label(self.frameMoM,
                                          text="Basis function : ",
                                          padx=3,
                                          pady=3)

        self.lbl_Excitation = tk.Label(self.frameMoM,
                                       text="Wire Excitation : ",
                                       padx=3,
                                       pady=3)

        ''' Labels in Bounds Panel '''
        self.lbl_MinR = tk.Label(self.passiveBounds,
                                 text="Minimum R (Ohm) : ",
                                 padx=3,
                                 pady=3)

        self.lbl_MaxR = tk.Label(self.passiveBounds,
                                 text="Maximum R (Ohm) : ",
                                 padx=3,
                                 pady=3)

        self.lbl_MinL = tk.Label(self.passiveBounds,
                                 text="Minimum L (uH) : ",
                                 padx=3,
                                 pady=3)

        self.lbl_MaxL = tk.Label(self.passiveBounds,
                                 text="Maximum L (uH) : ",
                                 padx=3,
                                 pady=3)

        self.lbl_MinC = tk.Label(self.passiveBounds,
                                 text="Minimum C (pF) : ",
                                 padx=3,
                                 pady=3)

        self.lbl_MaxC = tk.Label(self.passiveBounds,
                                 text="Maximum C (pF) : ",
                                 padx=3,
                                 pady=3)

        ''' Labels in Design Goals '''
        self.lbl_Gain = tk.Label(self.designGoals,
                                 text="Desired Gain (dB) : ",
                                 padx=3,
                                 pady=3)

        self.lbl_VSWR = tk.Label(self.designGoals,
                                 text="Desired VSWR : ",
                                 padx=3,
                                 pady=3)

        self.lbl_Z0 = tk.Label(self.designGoals,
                               text="Char. Imp. (Ohm) : ",
                               padx=3,
                               pady=3)

        ''' Labels in Fmincon Options '''
        self.lbl_Display = tk.Label(self.fminconSettings,
                                    text="Sim. Display : ",
                                    padx=3,
                                    pady=3)

        self.lbl_MaxFunEval = tk.Label(self.fminconSettings,
                                       text="Max. Fun. Eval : ",
                                       padx=3,
                                       pady=3)

        self.lbl_MaxIter = tk.Label(self.fminconSettings,
                                    text="Max. Iteration : ",
                                    padx=3,
                                    pady=3)

        self.lbl_TolFun = tk.Label(self.fminconSettings,
                                   text="Tol. Function : ",
                                   padx=3,
                                   pady=3)

        self.lbl_FminconAlgo = tk.Label(self.fminconSettings,
                                        text="Algorithm : ",
                                        padx=3,
                                        pady=3)

        ''' TEXT FIELDS '''
        ''' Text Fields in Monopole Length Panel '''
        self.txt_MonopoleLength = tk.Entry(self.antennaGeometry,
                                           width=14,
                                           text="",
                                           justify="center",
                                           font=('Arial', 12),
                                           textvariable=self.antennaLen)

        self.txt_WireRadius = tk.Entry(self.antennaGeometry,
                                       width=14,
                                       text="",
                                       justify="center",
                                       font=('Arial', 12),
                                       textvariable=self.wireRadius)

        self.txt_NumberOfLoads = tk.Entry(self.antennaGeometry,
                                          width=14,
                                          text="",
                                          justify="center",
                                          font=('Arial', 12),
                                          textvariable=self.numOfLoads)

        ''' Text Fields in Frequency Panel '''
        self.txt_StartFreq = tk.Entry(self.frequencyFrame,
                                      width=14,
                                      text="",
                                      justify="center",
                                      font=('Arial', 12),
                                      textvariable=self.startFreq)

        self.txt_StopFreq = tk.Entry(self.frequencyFrame,
                                     width=14,
                                     text="",
                                     justify="center",
                                     font=('Arial', 12),
                                     textvariable=self.stopFreq)

        self.txt_FreqStep = tk.Entry(self.frequencyFrame,
                                     width=14,
                                     text="",
                                     justify="center",
                                     font=('Arial', 12),
                                     textvariable=self.freqStep)

        ''' Text Fields in MoM Panel '''
        self.txt_NumberOfSegments = tk.Entry(self.frameMoM,
                                             width=14,
                                             text="",
                                             justify="center",
                                             font=('Arial', 12),
                                             textvariable=self.numOfSegments)

        ''' Text Fields in Bounds Panel '''
        self.txt_MinR = tk.Entry(self.passiveBounds,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.minR)

        self.txt_MaxR = tk.Entry(self.passiveBounds,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.maxR)

        self.txt_MinL = tk.Entry(self.passiveBounds,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.minL)

        self.txt_MaxL = tk.Entry(self.passiveBounds,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.maxL)

        self.txt_MinC = tk.Entry(self.passiveBounds,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.minC)

        self.txt_MaxC = tk.Entry(self.passiveBounds,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.maxC)

        ''' Text Fields in Design Goals Panel '''
        self.txt_Gain = tk.Entry(self.designGoals,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.desiredGain)

        self.txt_VSWR = tk.Entry(self.designGoals,
                                 width=14,
                                 text="",
                                 justify="center",
                                 font=('Arial', 12),
                                 textvariable=self.desiredVSWR)

        self.txt_Z0 = tk.Entry(self.designGoals,
                               width=14,
                               text="",
                               justify="center",
                               font=('Arial', 12),
                               textvariable=self.chZ0)

        ''' Text Fields in Fmincon Panel '''
        self.txt_MaxFunEval = tk.Entry(self.fminconSettings,
                                       width=14,
                                       text="",
                                       justify="center",
                                       font=('Arial', 12),
                                       textvariable=self.maxFunEval)

        self.txt_MaxIter = tk.Entry(self.fminconSettings,
                                    width=14,
                                    text="",
                                    justify="center",
                                    font=('Arial', 12),
                                    textvariable=self.maxIter)

        self.txt_TolFun = tk.Entry(self.fminconSettings,
                                   width=14,
                                   text="",
                                   justify="center",
                                   font=('Arial', 12),
                                   textvariable=self.tolFun)

        ''' Dropdowns '''
        self.opt_BasisFunc = tk.OptionMenu(self.frameMoM,
                                           self.basisFunc,
                                           *BASIS_FUNC_OPTIONS)

        self.opt_WireExcitation = tk.OptionMenu(self.frameMoM,
                                                self.wireExcitation,
                                                *WIRE_EXCITATION_OPTIONS)

        self.opt_Optimizer = tk.OptionMenu(self.optimizerFrame,
                                           self.optimizerFunc,
                                           command=self.show,
                                           *OPTIMIZER_OPTIONS)

        self.opt_fminconDisplay = tk.OptionMenu(self.fminconSettings,
                                                self.fminconDisplay,
                                                *SIM_DISPLAY_OPTIONS)

        self.opt_fminconAlgorithm = tk.OptionMenu(self.fminconSettings,
                                                  self.fminconAlgo,
                                                  *FMINCON_ALGORITHMS)

        self.opt_BasisFunc.config(width=15, font="Arial 8 bold")
        self.opt_WireExcitation.config(width=15, font="Arial 8 bold")
        self.opt_Optimizer.config(width=43, font="Arial 8 bold")
        self.opt_fminconDisplay.config(width=15, font="Arial 8 bold")
        self.opt_fminconAlgorithm.config(width=15, font="Arial 8 bold")

        ''' Adding Panels into the Grid '''
        self.antennaGeometry.grid(
            row=0, column=0, padx=self.labelFramePadX, pady=self.labelFramePadY)
        self.frequencyFrame.grid(
            row=1, column=0, padx=self.labelFramePadX, pady=self.labelFramePadY)
        self.frameMoM.grid(
            row=2, column=0, padx=self.labelFramePadX, pady=self.labelFramePadY)
        self.passiveBounds.grid(
            row=3, column=0, padx=self.labelFramePadX, pady=self.labelFramePadY)
        self.designGoals.grid(
            row=4, column=0, padx=self.labelFramePadX, pady=self.labelFramePadY)
        self.optimizerFrame.grid(
            row=5, column=0, padx=self.labelFramePadX, pady=self.labelFramePadY)
        self.fminconSettings.grid(
            row=0, column=1, padx=self.labelFramePadX, pady=self.labelFramePadY, rowspan=2)

        ''' Adding Labels into the Panels  '''
        self.lbl_MonopoleLength.grid(row=0, column=0, sticky="E")
        self.lbl_WireRadius.grid(row=1, column=0, sticky="E")
        self.lbl_NumberOfLoads.grid(row=2, column=0, sticky="E")

        self.lbl_StartFreq.grid(row=0, column=0, sticky="E")
        self.lbl_StopFreq.grid(row=1, column=0, sticky="E")
        self.lbl_FreqStep.grid(row=2, column=0, sticky="E")

        self.lbl_NumberOfSegments.place(x=10, y=3)
        self.lbl_BasisFunction.place(x=56.7, y=31)
        self.lbl_Excitation.place(x=49, y=58)

        self.lbl_MinR.place(x=29, y=3)
        self.lbl_MaxR.place(x=24.5, y=31)
        self.lbl_MinL.place(x=45, y=59)
        self.lbl_MaxL.place(x=40.5, y=87)
        self.lbl_MinC.place(x=42, y=115)
        self.lbl_MaxC.place(x=37.5, y=143)

        self.lbl_Gain.place(x=27, y=3)
        self.lbl_VSWR.place(x=45.5, y=31)
        self.lbl_Z0.place(x=36, y=59)

        self.lbl_Display.place(x=64, y=3)
        self.lbl_MaxFunEval.place(x=51, y=31)
        self.lbl_MaxIter.place(x=59.5, y=59)
        self.lbl_TolFun.place(x=63.2, y=87)
        self.lbl_FminconAlgo.place(x=85, y=115)

        ''' Adding Text Boxes into the Panels  '''
        self.txt_MonopoleLength.place(x=178, y=3)
        self.txt_WireRadius.place(x=178, y=31)
        self.txt_NumberOfLoads.place(x=178, y=58)

        self.txt_StartFreq.grid(row=0, column=1, sticky="E")
        self.txt_StopFreq.grid(row=1, column=1, sticky="E")
        self.txt_FreqStep.grid(row=2, column=1, sticky="E")

        self.txt_NumberOfSegments.place(x=178, y=6)

        self.txt_MinR.place(x=178, y=7)
        self.txt_MaxR.place(x=178, y=35)
        self.txt_MinL.place(x=178, y=63)
        self.txt_MaxL.place(x=178, y=91)
        self.txt_MinC.place(x=178, y=119)
        self.txt_MaxC.place(x=178, y=147)

        self.txt_Gain.place(x=178, y=7)
        self.txt_VSWR.place(x=178, y=35)
        self.txt_Z0.place(x=178, y=63)

        self.txt_MaxFunEval.place(x=178, y=35)
        self.txt_MaxIter.place(x=178, y=63)
        self.txt_TolFun.place(x=178, y=91)

        ''' Adding Dropdowns into the Panels  '''
        self.opt_BasisFunc.place(x=176.2, y=30)
        self.opt_WireExcitation.place(x=176.2, y=58)

        self.opt_Optimizer.grid(row=0, column=0, sticky="E")
        self.opt_Optimizer.place(x=8, y=2)

        self.opt_fminconDisplay.place(x=176, y=2)
        self.opt_fminconAlgorithm.place(x=176, y=115)

        ''' Fixing Grid Propagation '''
        self.antennaGeometry.grid_propagate(0)
        self.frequencyFrame.grid_propagate(0)
        self.frameMoM.grid_propagate(0)
        self.passiveBounds.grid_propagate(0)
        self.designGoals.grid_propagate(0)
        self.optimizerFrame.grid_propagate(0)
        self.fminconSettings.grid_propagate(0)

        ''' Main Loop for Root '''
        self.root.mainloop()

    ''' Starting window at the center of the screen '''

    def centerWindow(self, width=appWidth, height=appHeight):
        ws = self.root.winfo_screenwidth()
        hs = self.root.winfo_screenheight()

        x = ws/2 - width/2
        y = hs/2 - height/2
        self.root.geometry('%dx%d+%d+%d' % (width, height, x, y))

    @staticmethod
    def show(self):
        print("Selected value :", self.optimizerFunc.get())
