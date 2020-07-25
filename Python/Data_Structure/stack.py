# Stack Data_Structure
class Stack():
    def __init__(self):
        self.top = 0
        self.data = []
    
    def push(self, item):
        self.data.append(item)
        self.top += 1
    
    def pop(self):
        if self.top == 0:
            return -1
        self.top -= 1
        return self.data[self.top]

#-------------------------------------------------------------------------------#

stack = Stack()

print(f'{stack.pop()}')

stack.push(5)
stack.push(16)
stack.push(79)

print(f'{stack.pop()}')

print(f'{stack.pop()}')
print(f'{stack.pop()}')
print(f'{stack.pop()}')