from tkinter import *

def click():
  greeting = "Hello " + entry.get()
  label = Label(root, text = greeting)
  label.pack()

root = Tk()

button = Button(root, text = "Click me to get a greeting!", padx=50, pady=10, bg = "#000fff", fg = "aqua", command = click)
button.pack()

entry = Entry(root, width = 50, bg = "black", fg = "white")
entry.insert(0, "Enter your name here.")
entry.pack()

root.mainloop()
