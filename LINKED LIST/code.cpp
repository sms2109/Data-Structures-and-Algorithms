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
    Node* head;    // first node
    Node* tail;    // last node

public:
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

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    //insert in ll midddle
    void insert(int val,int pos){
        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"position is INVALID"<<endl;
            }
            temp = temp->next;
        }
        //temp is now at pos-1 i.e. prev/left
        newNode->next = temp->next;
        temp->next = newNode;
    } 

    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void reverse(){
        Node* curr = head;
        Node* prev = NULL;

        tail = head;
        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;

            //updation for next itr
            prev = curr;
            curr = next;
        }

        head = prev;
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

    void removeNth(int n){
        int size = getSize();
        Node* prev = head;
        for(int i=1;i<(size-n);i++){
            prev = prev->next;
        }

        Node* toDel = prev->next;
        cout<<"going to delete : "<<toDel->data<<endl;
        prev->next = prev->next->next;
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

    // Destructor (free memory)
    ~List(){
        Node* temp = head;
        while(temp != NULL){
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.display();

    ll.push_back(4);
    ll.push_back(5);

    ll.display();

    ll.insert(100,2);

    ll.display();

    ll.insert(47,3);

    ll.display();

    ll.pop_front();

    ll.display();

    ll.pop_back();

    ll.display();

    cout<<"Idx = "<<ll.searchItr(47)<<endl;

    ll.reverse();

    ll.display();

    ll.removeNth(2);

    ll.display();

    return 0;
}
