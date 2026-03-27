#include<iostream>
using namespace std;

int findArraySum(int arr[],int n){
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum += arr[i];
    }
    return totalSum;
}

bool equalSumPartition(int arr[],int n){
    int totalSum = findArraySum(arr,n);
    int prefixSum = 0;
    for(int i=0;i<n;i++){
        prefixSum += arr[i];
        int suffixSum = totalSum - prefixSum;
        if(suffixSum == prefixSum){
            return true;
        }
    }
    return false;
}

int main(){
    int n = 6;
    int arr[n] = {5,3,2,6,3,1};
    int arr2[n] = {1,3,2,4,5};
    cout<<equalSumPartition(arr,n)<<endl;
    cout<<equalSumPartition(arr2,n);
    return 0;
}