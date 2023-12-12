/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node *insertAtTail(Node *head, int k)
{
    // Write your code here
    Node *newNode = new Node(k);

    if (head == nullptr)
    {
        head = newNode;
        return head;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }

    // Add the new node to the end of the list
    current->next = newNode;
    newNode->prev = current;

    return head;
}
