#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[] = {3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);

    //array reverse usign extra space
    // int copyArr[n];
    // for(int i=0;i<n;i++){
    //     int j=n-i-1;
    //     copyArr[i] = arr[j];
    // }

    // for(int i=0;i<n;i++){
    //     arr[i] = copyArr[i];
    // }
    
    int start = 0 , end = n-1;

    while(start<end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start],arr[end]);

        start++;
        end--;
    }
    printArr(arr,n);
}