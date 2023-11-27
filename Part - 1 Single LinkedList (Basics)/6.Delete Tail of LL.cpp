/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *head){
    // Write your code here
    if(head==nullptr){
        return nullptr;
    }
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
  
    // Delete last node
    delete (second_last->next);
  
    // Change next of second last
    second_last->next = NULL;
  
    return head;
}