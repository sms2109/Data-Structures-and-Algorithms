#include<iostream>
#include<vector>
#include<algorithm>
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

class List{
public:
    Node* head;    
    Node* tail;    
    // Constructor
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void clear(){
        Node* temp = head;
        while(temp != NULL){
           Node* nextNode = temp->next;
           delete temp;
           temp = nextNode;
        }
        head = tail = NULL;
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

vector<int> linkedlisttoVector(Node* head){
    vector<int> arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return arr;
}

void vectorTolinkedlist(vector<int> arr,List &ll){
    for(int i=0;i<arr.size();i++){
        ll.push_back(arr[i]);
    }
    display(ll.head);
}

void print(vector<int> arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    List ll;
    ll.push_back(8);
    ll.push_back(6);
    ll.push_back(10);
    ll.push_back(5);
    ll.push_back(15);

    display(ll.head);

    vector<int> vec = linkedlisttoVector(ll.head);

    sort(vec.begin(),vec.end());

    // print(vec,vec.size());

    ll.clear();

    vectorTolinkedlist(vec,ll);

    return 0;
}