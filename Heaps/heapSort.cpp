#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int i,vector<int> &arr,int n){ //O(logn)
    int l = 2*i+1;
    int r = 2*i+2;
    int maxI = i;

    if(l<n && arr[l] > arr[maxI]){
        maxI = l;
    }
    if(r<n && arr[r] > arr[maxI]){
        maxI = r;
    }

    if(maxI != i){
        swap(arr[i],arr[maxI]);
        heapify(maxI,arr,n);   
    }
}

void heapSort(vector<int> &arr){ //O(n*logn)
    int n = arr.size();
    //step 1 : build max heap
    for(int i=n/2-1;i>=0;i--){ //O(n*logn)
        heapify(i,arr,n);
    }
    //step 2 : taking elements to correct position
    for(int i=n-1;i>=0;i--){ //O(n*logn)
        swap(arr[0],arr[i]);
        heapify(0,arr,i);
    }
}

int main(){
    vector<int> arr = {1,4,2,5,3};
    printVector(arr);
    heapSort(arr);
    printVector(arr);
    return 0;
}