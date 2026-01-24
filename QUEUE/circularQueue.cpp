#include<iostream>
using namespace std;

class Queue{
    int *arr;

    int capacity;
    int currSize;

    int front,rear;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;

        front = 0;
        rear = -1;
    }

    void enqueue(int data){
        if(currSize == capacity){
            cout<<"Queue is Full"<<endl;
            return;
        }

        rear = (rear+1) % capacity;
        arr[rear] = data;
        currSize++;
    }

    void dequeue(){
        if(Empty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        front = (front+1) % capacity;
        currSize--;
    }

    int Front(){
        if(Empty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool Empty(){
        return currSize == 0;
    }

    void printRear(){
        cout<<arr[rear]<<endl;
    }

};

int main(){
    Queue q(4);
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<< q.Front() <<endl;
    q.dequeue();
    cout<< q.Front() <<endl;
    q.enqueue(5);
    cout<< q.Front() <<endl;
    q.printRear();

    return 0;
}