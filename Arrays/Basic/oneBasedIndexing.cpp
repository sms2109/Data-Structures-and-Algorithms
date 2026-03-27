#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i] = i*2;
    }
    cout<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5];
}