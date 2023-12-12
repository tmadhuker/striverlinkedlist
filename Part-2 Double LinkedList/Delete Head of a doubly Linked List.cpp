/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev=NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->next= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};
*/

Node *deleteHead(Node *head)
{
    // Write your code here.
    if (head->next == NULL)
        return NULL;
    Node *prev = head;
    head = head->next;
    head->prev = NULL;
    prev->next = NULL;
    delete prev;
    return head;
}
