#include<iostream>
#include<queue> 
using namespace std;

int main(){
    // priority_queue<int> pq; //default //decreasing //max heap
    priority_queue<int,vector<int>,greater<int>> pq; //increasing //min heap
    

    pq.push(5);
    pq.push(10);
    pq.push(3);
    pq.push(9);
    pq.push(6);
    pq.push(1);

    // cout<<"top : "<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<"top : "<<pq.top()<<endl;
        pq.pop();
    }

    return 0;
}