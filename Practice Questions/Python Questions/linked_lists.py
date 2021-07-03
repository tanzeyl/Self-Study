class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

    def print_node(self):
        print(self.data)


class LinkedList:
    def __init__(self):
        self.head = None

    def append_node(self, data):
        if not self.head:
            self.head = Node(data)
            return
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = Node(data)
