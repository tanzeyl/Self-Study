class Orange:
    def __init__(self, w, c):
        self.weight = w
        self.color = c
        self.mold = 0

    def rot(self, days, temp):
        self.mold = days * temp


# orange = Orange(6, "orange")
# print(orange.mold)
# orange.rot(10, 98)
# print(orange.mold)

class Rectangle:
    def __init__(self, w, l):
        self.width = w
        self.length = l

    def area(self, w, l):
        return self.width * self.length

    def size(self, w, l):
        self.width = w
        self.length = l


# square = Rectangle(10, 10)
# ar = square.area(10, 10)
# print(ar)
# square.size(12, 12)
# ar = square.area(12, 12)
# print(ar)

class Dog:
    def __init__(self, name, breed, owner):
        self.name = name
        self.breed = breed
        self.owner = owner


class Person:

    def __init__(self, name):
        self.name = name


# Mick = Person("Mick Jagger")
# Stan = Dog("Stan", "Bulldog", Mick)
# print(Stan.owner.name)
# By doing this, the dog has an owner.

class Square:
    square_list = []
    def __init__(self, s1):
        self.s1 = s1
        self.square_list.append(self.s1)

square = Square(23)
print(Square.square_list)
