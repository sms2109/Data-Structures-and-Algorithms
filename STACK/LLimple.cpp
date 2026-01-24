#include<iostream>
#include<list>
using namespace std;


template<class T>
class Stack {
    list<T> ll;
public:
    void push(T val){  //O(1)
        ll.push_front(val);
        cout<<val<<" is pushed in stack"<<endl;
    }
    
    void pop(){  //O(1)
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        ll.pop_front();
    }

    T top(){  //O(1)
        return ll.front();
    }

    bool isEmpty(){  //O(1)
        return ll.size() == 0;
    }
};

int main(){
    Stack<string> s1;
    s1.push("Sheshkaran");
    s1.push("am");
    s1.push("I");

    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}