class Shape():
    def what_am_i(self):
        print("I am a shape.")

class Square(Shape):
    def __init__(self, s1):
        self.s1 = s1

class Rectangle(Shape):
    def __init__(self, w, l):
        self.width = w
        self.length = l

square = Square(20)
rectangle = Rectangle(20,20)
square.what_am_i()
rectangle.what_am_i()