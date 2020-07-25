# Queue Data_Structure
class Queue():
    def __init__(self, queue_max_size=500000):
        self.head = 0
        self.tail = 0
        self.queue_max_size = queue_max_size
        self.data = []
    
    def enqueue(self, item):
        self.data.append(item)
        self.tail = (self.tail+1) % (self.queue_max_size+1)

    def dequeue(self):
        if self.head == self.tail:
            return -1
        self.head = (self.head+1) % (self.queue_max_size+1)
        return self.data[self.head-1]

#-------------------------------------------------------------------------------#

queue = Queue(10)

print(f'{queue.dequeue()}')

queue.enqueue(5)
queue.enqueue(6)
queue.enqueue(7)

print(f'{queue.dequeue()}')

print(f'{queue.dequeue()}')
print(f'{queue.dequeue()}')
print(f'{queue.dequeue()}')