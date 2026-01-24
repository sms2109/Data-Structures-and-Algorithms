#include<iostream>
using namespace std;

void func(int arr[],int n){
    // cout<<sizeof(arr)<<endl; //8=size of int pointer
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

void func2(int *ptr){
    ptr[0] = 1000;
}

 //both the function are means to same

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<arr<<endl; //address of arr[0]
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    int n = sizeof(arr)/sizeof(int);
    func(arr,n); //passing array name is equal to passing the pointer
    cout<<"\n";
    cout<<arr[0];
    return 0;
}