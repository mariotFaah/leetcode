class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def traverse_print(head):
    current_node = head
    while current_node:
        print(current_node.data, end="-> ")
        current_node = current_node.next
    print("null")

def delete_node(head, node_to_delete):
    if head == node_to_delete:
        return head.next

    current_node = head
    while current_node.next and current_node.next != node_to_delete:
        current_node = current_node.next

    if current_node.next is None:
        return head
    current_node.next = current_node.next.next
    return head

node1 = Node(7)
node2 = Node(11)
node3 = Node(3)
node4 = Node(2)
node5 = Node(9)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

print("Before deletion: ")
traverse_print(node1)

# Delete node4
node1 = delete_node(node1, node4)

print("\nAfter deletion:")
traverse_print(node1)
