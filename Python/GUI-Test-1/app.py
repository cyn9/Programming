from Window import *
import tkinter as tk

def main() -> None:
    root = tk.Tk()

    window1 = Window(root, "GUI Example", "400x400", "Hello, Tk.")

    return None

main()