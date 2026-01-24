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

    pushAtBottom(s,4);

    print(s);
    
    return 0;
}