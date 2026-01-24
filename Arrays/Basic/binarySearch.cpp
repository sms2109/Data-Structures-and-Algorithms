#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int x){
    int start = 0;
    int end = size-1;
    
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
   cout << "enter the size of array : " <<endl;
   cin>>n;

   int arr[n];
   cout << "enter array elements : "<<endl;
   for(int i=0;i<n;i++){
      cout<<"element" <<i+1<<" : "<<endl;
      cin>>arr[i];
   }

   int x;
   cout<<"enter element to search : "<<endl;
   cin>>x;

   int result = binarySearch(arr,n,x);

    if (result == -1) {
        cout<<"Element is not present in array"<<endl;
    } else {
        cout<<"Element is present at index : "<<result<<endl;
    }
    return 0;
}