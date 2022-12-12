from tkinter import *

def click():
  label = Label(root, text = "I clicked the button.")
  label.pack()

root = Tk()
button1 = Button(root, padx = 50, text = "I am a button!", command = click)
button2 = Button(root, padx = 50, text = "Me too", state = DISABLED, fg = "green", bg = "#fff000")
button1.pack()
button2.pack()
root.mainloop()
