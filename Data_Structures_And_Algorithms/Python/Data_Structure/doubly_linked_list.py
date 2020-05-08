# Doubly_Linked_List Data_Structure

class Node:
    def __init__(self, data, previous=None, next=None):
        self.data = data
        self.previous = previous
        self.next = next
    
    # Remove A Node...
    def remove_node(self, node):
        if node == self:
            self = self.next
            return self
        node.previous.next = node.next
        return self

    # Insert A Node At The Beginning...
    def prepend(self, item):
        return Node(item, None, self)
    
    # Insert A Node...
    def insert(self, node, item):
        node.next = Node(item, node, node.next)

    # Insert A Node At The End...
    def append(self, item):
        new_node = Node(item)
        if self == None: return new_node
        current_node = self
        while current_node.next != None:
            current_node = current_node.next
        current_node.next = new_node
        return self

    # Find A Node
    def find_node(self, item):
        temp = self
        while temp != None:
            if temp.data == item: return temp
            temp = temp.next
        return None
    
    # Print Linked_List...
    def print_linked_list(self):
        current_node = self
        print(f'[{current_node.data}', end='')
        current_node = current_node.next
        while current_node != None:
            print(f', {current_node.data}', end='')
            current_node = current_node.next
        print(']')


#-------------------------------------------------------------------------------#


head = Node(0)
head.append(1)
head.append(2)
head.append(3)
head.append(4)
head.append(5)
head.print_linked_list()