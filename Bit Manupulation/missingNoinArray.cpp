#include <iostream>
using namespace std;

int findMissingNo(int arr[],int n){
    int xor1 = 0 , xor2 = 0;
    for(int i=0;i<n;i++){
        xor1 ^= arr[i];
    }
    for(int i=0;i<=n;i++){
        xor2 ^= i;
    }
    return xor1 ^ xor2;
}

int main(){
    int arr[] = {0,1,2,4,5};
    int n = 5;
    cout<<findMissingNo(arr,n);
    return 0;
}