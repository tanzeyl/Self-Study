from tkinter import *

root = Tk()
root.title("Calculator")

entry = Entry(root, width = 35, borderwidth = 5)
entry.grid(row = 0, column = 0, columnspan = 3, padx = 10, pady = 10)

def onClick(number):
  current = entry.get()
  entry.delete(0, END)
  entry.insert(0, str(current) + str(number))

def preReq():
  global firstNum
  firstNum = int(entry.get())
  entry.delete(0, END)

def add():
  preReq()
  global flag
  flag = "add"

def sub():
  preReq()
  global flag
  flag = "sub"

def mul():
  preReq()
  global flag
  flag = "mul"

def div():
  preReq()
  global flag
  flag = "div"

def mod():
  preReq()
  global flag
  flag = "mod"

def clear():
  entry.delete(0, END)

def equals():
  secondNum = int(entry.get())
  entry.delete(0, END)
  if flag == "add":
    secondNum = firstNum + secondNum;
  elif flag == "sub":
    secondNum = firstNum - secondNum
  elif flag == "mul":
    secondNum = firstNum * secondNum
  elif flag == "div":
    secondNum = firstNum // secondNum
  elif flag == "mod":
    secondNum = firstNum % secondNum
  entry.insert(0, secondNum)

button7 = Button(root, padx = 40, pady = 20, text = "7", command = lambda: onClick(7)).grid(row = 1, column = 0)
button8 = Button(root, padx = 40, pady = 20, text = "8", command = lambda: onClick(8)).grid(row = 1, column = 1)
button9 = Button(root, padx = 40, pady = 20, text = "9", command = lambda: onClick(9)).grid(row = 1, column = 2)

button4 = Button(root, padx = 40, pady = 20, text = "4", command = lambda: onClick(4)).grid(row = 2, column = 0)
button5 = Button(root, padx = 40, pady = 20, text = "5", command = lambda: onClick(5)).grid(row = 2, column = 1)
button6 = Button(root, padx = 40, pady = 20, text = "6", command = lambda: onClick(6)).grid(row = 2, column = 2)

button1 = Button(root, padx = 40, pady = 20, text = "1", command = lambda: onClick(1)).grid(row = 3, column = 0)
button2 = Button(root, padx = 40, pady = 20, text = "2", command = lambda: onClick(2)).grid(row = 3, column = 1)
button3 = Button(root, padx = 40, pady = 20, text = "3", command = lambda: onClick(3)).grid(row = 3, column = 2)

button0 = Button(root, padx = 40, pady = 20, text = "0", command = lambda: onClick(0)).grid(row = 4, column = 0)
buttonAdd = Button(root, padx = 39, pady = 20, text = "+", command = add).grid(row = 4, column = 1)
buttonSub = Button(root, padx = 39, pady = 20, text = "-", command = sub).grid(row = 4, column = 2)

buttonMul = Button(root, padx = 41, pady = 20, text = "*", command = mul).grid(row = 5, column = 0)
buttonDiv = Button(root, padx = 41, pady = 20, text = "/", command = div).grid(row = 5, column = 1)
buttonMod = Button(root, padx = 38, pady = 20, text = "%", command = mod).grid(row = 5, column = 2)

buttonEqual = Button(root, padx = 143, pady = 20, text = "=", command = equals).grid(row = 6, column = 0, columnspan=3)
buttonClear = Button(root, padx = 133, pady = 20, text = "Clear", command = clear).grid(row = 7, column = 0, columnspan=3)

root.mainloop()
