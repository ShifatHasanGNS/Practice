# Binary_Tree Data_Structure

class Node:
    def __init__(self, data=-1, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right
    
    def add_left_child(self, child):
        self.left = child
    
    def add_right_child(self, child):
        self.right = child
    
    def pre_order(self):
        print(self.data, end='  ')
        if self.left != None: self.left.pre_order()
        if self.right != None: self.right.pre_order()

    
    def post_order(self):
        if self.left != None: self.left.post_order()
        if self.right != None: self.right.post_order()
        print(self.data, end='  ')
    
    def in_order(self):
        if self.left != None: self.left.in_order()
        print(self.data, end='  ')
        if self.right != None: self.right.in_order()


#-------------------------------------------------------------------------------#

def create_tree():  # This function just to Test
    ''' 
    Tree:
                 2
               /   \
             7      9
            / \      \
           1   6      8
              / \    / \
             5  10  3   4
    '''
    # Create Node(s)
    two = Node(2) # This would be the root-node
    seven = Node(7)
    nine = Node(9)
    one = Node(1)
    six = Node(6)
    eight = Node(8)
    five = Node(5)
    ten = Node(10)
    three = Node(3)
    four = Node(4)
    # Create Tree
    two.add_left_child(seven)
    two.add_right_child(nine)
    seven.add_left_child(one)
    seven.add_right_child(six)
    nine.add_right_child(eight)
    six.add_left_child(five)
    six.add_right_child(ten)
    eight.add_left_child(three)
    eight.add_right_child(four)
    # Return root-node;
    return two

#-------------------------------------------------------------------------------#


root = create_tree()

print('Pre_Order -->\t[  ', end="")
root.pre_order()
print(']')

print('Post_Order -->\t[  ', end="")
root.post_order()
print(']')

print('In_Order -->\t[  ', end="")
root.in_order()
print(']')