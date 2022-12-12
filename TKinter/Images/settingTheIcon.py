from tkinter import *

root = Tk()
root.title("Learning TKinter")
root.iconbitmap("C:\\Users\\tanze\\OneDrive\\Desktop\\Self-Study\\TKinter\\Assets\\icon.ico")

button = Button(root, text = "Exit", command = root.quit)
button.pack()

root.mainloop()
