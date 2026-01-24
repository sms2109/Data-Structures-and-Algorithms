#include <iostream>
using namespace std;

// Node Class
class Node
{
public:
    int data;   // stores value
    Node *next; // pointer to next node

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* removeKthnode(int k, Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    for (int i = 0; i < k-1; i++)
    {
        //update the previous node as well
        prev = curr;
        if(curr == nullptr){
            cout<<"k should be in range"<<endl;
            return head; //only happens when k>size of the list
        }
        //move forward
        curr = curr->next;
    }
    if(prev == NULL){
        return head->next;
    }
    
    prev->next = curr->next;    
    return head;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    display(head);

    head = removeKthnode(2,head);

    display(head);

    return 0;
}
