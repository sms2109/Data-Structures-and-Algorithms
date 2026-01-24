#include <iostream>
using namespace std;

// bool isArraySorted(int arr[], int n) {
//     for(int i = 0; i < n-1; i++) {
//         if(arr[i] > arr[i+1]) {
//             return false;   // not sorted
//         }
//     }
//     return true;            // sorted
// }

bool isArraySorted(int arr[],int n,int i){
    if(i == n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isArraySorted(arr,n,i+1);
}
int main() {
    int arr[5] = {1,2,3,4,5};
    int arr2[] = {2,4,7,4,5,3};
    int n = sizeof(arr) / sizeof(int);
    // cout << isArraySorted(arr, n);
    cout<<isArraySorted(arr2,n,0);
}
