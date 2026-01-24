#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head = tail = NULL;
    }

    void Enqueue(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }   
    }

    void Dequeue(){
        if(Empty()){
           cout<<"queue is empty"<<endl;
           return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    int Front(){
        if(Empty()){
           cout<<"queue is empty"<<endl;
           return -1;
        }
        return head->data;
    }

    bool Empty(){
        return head == NULL;
    }
};
int main(){
    Queue q;

    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);

    while(!q.Empty()){
        cout<<q.Front()<<endl;
        q.Dequeue();
    }

    return 0;
}