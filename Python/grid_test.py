from tkinter import Entry, Tk, mainloop
from tkinter import Label
from tkinter.constants import W

master = Tk()
lbl1 = Label(master, text = "First:") 
lbl2 = Label(master, text = "Last:") 

lbl1.grid(row = 0, column = 0, sticky = W, padx = 4, pady = 4)
lbl2.grid(row = 1, column = 0, sticky = W, padx = 4, pady = 4)

txt1 = Entry(master)
txt2 = Entry(master)

txt1.grid(row = 0, column = 1, sticky = W, padx = 4, pady = 4)
txt2.grid(row = 1, column = 1, sticky = W, padx = 4, pady = 4)

mainloop()
