import tkinter as tk

class Window:
    n = 0 
    
    def __init__(self, root, title, geometry):
        self.root = root
        self.root.title = title
        self.root.geometry = geometry

        tk.Label(self.root, text = "Hello, Tkinter...").pack()
        btn_Click = tk.Button(self.root, text = "Click Me!", command = self.incr)
        btn_Click.pack()

        self.root.mainloop()

    def incr(self):
        self.n += 1
        print(self.n)
