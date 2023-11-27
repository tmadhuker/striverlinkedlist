/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
    int val = arr[0];
    Node* head= new Node(val);
    Node* mover = head;
    int l=arr.size();
    for(int i=1;i<l;i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
   return head;
    

}