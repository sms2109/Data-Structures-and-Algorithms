#include<iostream>
#include<string>
#include<vector>
using namespace std;

//create stack using vector

template<class T>
class Stack {
    vector<T> vec;
public:
    void push(T val){  //O(1)
        vec.push_back(val);
        cout<<val<<" is pushed in stack"<<endl;
    }
    
    void pop(){  //O(1)
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        vec.pop_back();
    }

    T top(){  //O(1)
        // if(isEmpty()){
        //     cout<<"stack is empty"<<endl;
        //     return -1;
        // }
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty(){  //O(1)
        return vec.size() == 0;
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