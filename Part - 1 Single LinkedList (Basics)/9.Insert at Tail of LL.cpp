/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
    };

************************************************************/

Node* insertEnd(Node* head, int k) {
    // Write your code here.
    Node* new_node=new Node(k);
    new_node->next = NULL;

    // If the list is empty, make the new node as the head
    if (head == NULL) {
        head = new_node;
        return head;
    }

    // Traverse the list until the end
    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    // Append the new node to the end
    curr->next = new_node;

    return head;
}