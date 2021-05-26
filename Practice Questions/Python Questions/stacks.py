class Stack:
    def __init__(self):
        self.items = []

    def empty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        self.items.pop()

    def peek(self):
        last = len(self.items) - 1
        return self.items[last]


stack = Stack()
for i in "yesterday":
    stack.push(i)
rev = ""
for i in range(len(stack.items)):
    rev += stack.pop()
print(rev)
