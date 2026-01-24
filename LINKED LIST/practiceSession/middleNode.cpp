#include<iostream>
using namespace std;

//Node Class
class Node{
public:
    int data;      // stores value
    Node* next;    // pointer to next node

    Node(int val){
        data = val;
        next = NULL;
    }
};

//Linked List Class
class List{
public:
    Node* head;    // first node
    Node* tail;    // last node

    // Constructor
    List(){
        head = NULL;
        tail = NULL;
    }

    // Insert at beginning
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    int getSize(){
        Node* temp = head;
        int sz = 0;
        while(temp != NULL){
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    Node* middleNode(Node* head){
        int size = getSize();
        Node* temp = head;
        for(int i=0;i<(size/2);i++){
            temp = temp->next;
        }

        return temp;
    }

    // Display list
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

//simply search and return not split
Node *searchAtMiddle(Node *head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

int main(){
    List ll;

    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.display();
    // ll.head = ll.middleNode(ll.head);
    // ll.display();
    ll.head = searchAtMiddle(ll.head);
    ll.display();

    return 0;
}

//time complexity = O(N+N) //not optimal 
//use slow fast pointer approach