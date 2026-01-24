#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    //bubble sort algorithm
    for(int i=0;i<n-1;i++){
        cout<<"Pass "<<i+1<<":"<<endl;
        bool isSwap = false; //optimization to check if array is already sorted
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap arr[j] and arr[j+1]
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
                isSwap = true;
                
            }
            printArr(arr,n);
        }
        if(!isSwap){
            break; //array is already sorted
        }
    }
    cout<<"Sorted array:"<<endl;
    printArr(arr,n);
}
int main(){
    int arr[] = {5,1,4,2,8};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
}