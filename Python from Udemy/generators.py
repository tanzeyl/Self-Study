def Items():

    print("First")
    yield 15
    print("Second")
    yield 20
    print("Third")
    yield 25

new = Items()
print(next(new))
print(next(new))
print(next(new))