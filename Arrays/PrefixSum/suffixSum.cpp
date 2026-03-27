#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void suffixSum(int arr[],int n){
    for(int i=n-2;i>=0;i--){
        arr[i] = arr[i+1] + arr[i];
    }
    PrintArr(arr,n);
}
int main(){
    int n = 6;
    int arr[n] = {2,1,3,4,5,6};
    suffixSum(arr,n);
    return 0;
}