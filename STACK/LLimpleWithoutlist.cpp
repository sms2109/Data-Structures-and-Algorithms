#include<iostream>
using namespace std;

template<class T>
class Node{
public:
    T data;
    Node<T>* next;
    
    Node(T val){
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack {
    Node<T>* head;
public:
    Stack(){
        head = NULL;
    }
    void push(T val){  //O(1)
        Node<T>* newNode = new Node<T>(val);
        if(head == NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    
    void pop(){  //O(1)
        if(isEmpty()){
            cout<<"pop"<<endl;
            throw runtime_error("Stack is empty");
        }
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top(){  //O(1)
        if(isEmpty()){
            cout<<"top"<<endl;
            throw runtime_error("Stack is empty");
        }
        return head->data;
    }

    bool isEmpty(){  //O(1)
        return head == NULL;
    }

    void display(){
        Node<T>* temp = head;
        while(temp != NULL){
           cout << temp->data << " -> ";
           temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    Stack<string> s1;
    s1.push("Sheshkaran");
    s1.push("am");
    s1.push("I");

    s1.display();

    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }

    cout<<endl;
    s1.display();

    return 0;
}