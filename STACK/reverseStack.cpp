#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s,int val){ //O(n)
    if(s.empty()){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,temp);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<"----------"<<endl;
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    print(s);

    reverse(s);

    print(s);
    
    return 0;
}