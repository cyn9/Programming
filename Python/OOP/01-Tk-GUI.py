import tkinter as tk

root = tk.Tk()


class App:
    def __init__(self, master):
        mainFrame = tk.Frame(master)
        mainFrame.pack()

        self.btn_Message = tk.Button(mainFrame, text = "Click Me!", command = self.clickMe)
        self.btn_Message.pack(side = tk.LEFT)

        self.btn_Close = tk.Button(mainFrame, text = "Quit!", command = master.destroy)
        self.btn_Close.pack(side = tk.LEFT)
        
        self.appMenu = tk.Menu(master)
        master.config(menu = self.appMenu)
        self.subMenu = tk.Menu(self.appMenu, tearoff = 0)
        self.appMenu.add_cascade(label = "File", menu = self.subMenu)
        self.subMenu.add_command(label = "New Project", command = self.newProject)
        self.subMenu.add_command(label = "Load Project", command = self.loadProject)
        self.subMenu.add_command(label = "Exit", command = master.destroy)


    def clickMe(self):
        print("Button clicked!")

    
    def newProject(self):
        print("New Project option clicked!")

    
    def loadProject(self):
        print("Load Project option clicked!")


appObj = App(root)
root.mainloop()
