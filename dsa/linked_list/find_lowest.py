class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def find_lowest(head):
    minValue = head.data
    current_node = head.next
    while current_node:
        if current_node.data < minValue:
            minValue = current_node.data
        current_node = current_node.next
    return minValue

node1 = Node(7)
node2 = Node(11)
node3 = Node(3)
node4 = Node(2)
node5 = Node(9)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

print("The lowes value in the linked list is :", find_lowest(node1))
