#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void changeArr(int arr[],int n,int i){
    if(i==n){
        printArr(arr,5);
        return;
    }
    arr[i] = i+1; //up in call stack
    changeArr(arr,n,i+1);
    arr[i] -= 2; //backtracking step  //down in call stack
}

int main(){
    int arr[5] = {0};
    changeArr(arr,5,0);
    printArr(arr,5);
}