#include<iostream>
#include<deque>
using namespace std;

class Stack{
    deque<int> deq;
public:
    void push(int data){
        deq.push_back(data);
    }

    void pop(){
        if(empty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        deq.pop_back();
    }

    int top(){
        if(empty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return deq.back();
    }

    bool empty(){
        return deq.empty();
    }
};

int main(){
    Stack s;

    s.pop();
    s.top();
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}