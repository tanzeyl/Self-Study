from turtle import *
from random import randint
bgcolor('white')
x = 1
speed(100000)
while x < 400:

 r = randint(0,255)
 g = randint(0,255)
 b = randint(0,255)

 colormode(255)
 pencolor(r,g,b)
 fd(50 + x)
 rt(90.991)
 x = x+1

exitonclick()
