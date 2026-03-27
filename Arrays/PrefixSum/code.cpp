#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//prefixSum using extra space
void prefixSum(int arr[],int n){
    int pref[n];  
    pref[0] = arr[0];  
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1] + arr[i];
    }
    printf("Prefix Sum Array: ");
    PrintArr(pref,n);
}

//prefixSum using constant space
void prefixSumConstantSpace(int arr[],int n){
    for(int i=1;i<n;i++){
        arr[i] = arr[i-1] + arr[i];
    }
    printf("Prefix Sum Array: ");
    
}


int main(){
    int arr[] = {2,1,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    PrintArr(arr,n);
    prefixSum(arr,n);
    prefixSumConstantSpace(arr,n);
    PrintArr(arr,n);
    return 0;
}