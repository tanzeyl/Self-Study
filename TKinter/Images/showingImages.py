from tkinter import *
from PIL import ImageTk, Image

root = Tk()

img = ImageTk.PhotoImage(Image.open("C:\\Users\\tanze\\OneDrive\\Desktop\\Self-Study\\TKinter\\Assets\\image1.jpeg"))
label = Label(image = img)
label.pack()

root.mainloop()
