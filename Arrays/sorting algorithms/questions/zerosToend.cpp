#include<iostream>
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void bubbleSort(int arr[],int nez,int n){
    for(int i=0;i<nez;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    printArr(arr,n);
}

int main(){
    int arr[] = {1,0,4,0,2,-40,100,0,5};
    int n = sizeof(arr)/sizeof(int);
    int nez = 0;
    for(int ele : arr){
        if(ele == 0){
            nez++;
        }
    }
    bubbleSort(arr,nez,n);
}