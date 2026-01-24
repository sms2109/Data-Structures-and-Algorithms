#include<iostream>
using namespace std;

//Node Class
class Node{
public:
    int data;      // stores value
    Node* next;    // pointer to next node
    Node* prev;    // pointer to prev node

    Node(int val){
        data = val;
        prev = next = NULL;
    }
};

class DoublyList{
    Node* head;    // first node
    Node* tail;    // last node

public:
    // Constructor
    DoublyList(){
        head = tail = NULL;
    }

    // Insert at beginning
    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;

        if(head != NULL){
            head -> prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main(){
    DoublyList ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.display();
    
    ll.push_back(4);

    ll.display();

    ll.pop_front();

    ll.display();

    ll.pop_back();

    ll.display();
}