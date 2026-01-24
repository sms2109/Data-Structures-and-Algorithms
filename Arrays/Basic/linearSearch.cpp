#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Return the index of the element
        }
    }
    return -1; // Element not found
}

int main() {
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

   int result = linearSearch(arr,n,x);

    if (result == -1) {
        cout<<"Element is not present in array"<<endl;
    } else {
        cout<<"Element is present at index : "<<result<<endl;
    }
    return 0;
}