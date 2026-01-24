#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void queueReversal(queue<int> &q){
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

void printQueue(queue<int> q ){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;

    for(int i=1;i<=10;i++){
        q.push(i);
    }

    printQueue(q);

    queueReversal(q);

    printQueue(q);


    return 0;
}