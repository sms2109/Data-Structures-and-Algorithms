//Question 1 : Write a recursive function to perform Binary Search.

#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int st,int end){
    if(st>end){
        return -1;
    }

    int mid = (st+end)/2;
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<key){
        return binarySearch(arr,key,mid+1,end);
    }else{
        return binarySearch(arr,key,st,mid-1);
    }
}

int main(){
    int arr[] = {23,45,56,67,78,89,123,234,345,456,567,677,789};
    int key = 677;
    int n = sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,key,0,n-1);
}