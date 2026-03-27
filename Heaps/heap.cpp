#include<iostream>
#include<vector>
using namespace std;

class Heap{
    vector<int> vec; //CBT
public:
    void push(int val){ //O(logn)
        vec.push_back(val); //step1

        //step2 : fix heap
        int x = vec.size()-1; //childIndex
        int parI = (x-1)/2;
        while(parI>=0 && vec[x] > vec[parI]){  //max heap , for min heap just use vec[x]<vec[parI]
            swap(vec[x],vec[parI]);
            x = parI;
            parI = (x-1)/2;
        }
    }

    void heapify(int i){ //i = parI

        if(i >= vec.size()){ //when vector is empty
            return;
        }

        int l = 2*i + 1;
        int r = 2*i + 2;

        int maxIdx = i;
        if(l < vec.size() && vec[l] > vec[maxIdx]){
            maxIdx = l;
        }
        if(r < vec.size() && vec[r] > vec[maxIdx]){
            maxIdx = r;
        }

        swap(vec[i],vec[maxIdx]);
        if(maxIdx != i){ //swapping with child node
            heapify(maxIdx);
        }
    }

    void pop(){
        //step 1
        swap(vec[0],vec[vec.size()-1]);
        //step 2
        vec.pop_back();
        //step 3
        heapify(0);
    }

    int top(){ //O(1)
        if(empty()){
            cout<<"heap is empty"<<endl;
            return -1;
        }
        return vec[0]; //hightest priority element
    }

    bool empty(){
        return vec.size() == 0;
    }
};

int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(70);
    heap.push(90);

    while(!heap.empty()){
        cout<<"top : "<<heap.top()<<endl;
        heap.pop();
    }
}