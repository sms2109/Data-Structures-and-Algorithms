#include<iostream>
using namespace std;

// throught linear search
int main(){
    int arr[6]={0,3,8,9,5,2};
    for(int i=1;i<5;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            cout<<i<<" "<<arr[i];
        }
    }

  return 0;
}

