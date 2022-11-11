public class LinkedList{
    Node head;
    
    public void append(int data){
        if(head == null){
           head = new Node(data);
           return;
          }
        Node current = head;
        while(current.next != null){
            current  = current.next;
        }
        current.next = new Node(data);
     }
      public void prepend(int data){
        Node newHead = new Node(data);
        newHead.next = head;
        head = newHead;
    }
     void delete_at(int position) {
    if (head == null)
      return;

    Node temp = head;

    if (position == 0) {
      head = temp.next;
      return;
    }
    // Find the key to be deleted
    for (int i = 0; temp != null && i < position - 1; i++)
      temp = temp.next;

    // If the key is not present
    if (temp == null || temp.next == null)
      return;

    // Remove the node
    Node next = temp.next.next;

    temp.next = next;
  }
     public void delete_with_value(int data){
if(head == null) return;

Node current = head;
while  (current.next != null){
if (current.next.data == data){
    current.next = current.next.next;
    return;
    }
  current = current.next;
 }
}
public void insert_at_beginning(int new_data) {
    // insert the data
    Node new_node = new Node(new_data);
    new_node.next = head;
    head = new_node;
  }

  // Insert after a node
  public void insert_after(Node prev_node, int new_data) {
    if (prev_node == null) {
      System.out.println("The given previous node cannot be null");
      return;
    }
    Node new_node = new Node(new_data);
    new_node.next = prev_node.next;
    prev_node.next = new_node;
  }

  // Insert at the end
  public void insert_at_end(int new_data) {
    Node new_node = new Node(new_data);

    if (head == null) {
      head = new Node(new_data);
      return;
    }

    new_node.next = null;

    Node last = head;
    while (last.next != null)
      last = last.next;

    last.next = new_node;
    return;
  }
   public  void print_list()
    {
        Node currNode = this.head;
        // Traverse through the LinkedList
        while (currNode != null) {
            // Print the data at current node
            System.out.println(currNode.data);
 
            // Go to next node
            currNode = currNode.next;
        }
}
}