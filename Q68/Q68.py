class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def in_order_traversal(root):
    stack = []  
    current = root

    while current is not None or stack:
        
        while current is not None:
            stack.append(current)
            current = current.left

        current = stack.pop()
        print(current.data, end=" ")  
      
        current = current.right

if __name__ == "__main__":
  
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("In-order traversal:", end=" ")
    in_order_traversal(root)
