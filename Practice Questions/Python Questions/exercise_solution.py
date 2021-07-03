class Stack:
    def __init__(self):
        self.items = []

    def push(self, items):
        self.items.append(items)

    def pop(self):
        self.items.pop()


my_string = "yesterday"
stack = Stack()
for i in my_string:
    stack.push(i)
rev = ""
for i in range(len(stack.items)):
    rev += stack.pop()

print(rev)