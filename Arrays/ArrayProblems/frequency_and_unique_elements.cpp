#include<iostream>
using namespace std;

int uniquebyXor(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];  
        //x ^ x = 0 //this XOR method works ONLY when all repeated numbers appear exactly twice
    }
    return ans;
}

int uniqueElement(int arr[],int n){
    int minele = INT_MAX;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
           if(arr[i]==arr[j]){
               count++;
           }
        }
        if(count==1){
            return arr[i];
        }
    }
    return -1;
}  

void elementsWithFreq(int arr[],int n){
    for(int i = 0; i < n; i++) {
        int count = 0;
        bool printed = false;

        // check if arr[i] already printed before
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                printed = true;
                break;
            }
        }

        if(printed) continue; // skip duplicates

        // count frequency of arr[i]
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        cout << arr[i] << " appears " << count << " times" << endl;
    }
}

int MinElement(int arr[],int n){
    int minFreq = INT_MAX;
    int minElement = -1;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
           if(arr[i]==arr[j]){
               count++;
           }
        }
        if(count < minFreq){
            minFreq = count;
            minElement = arr[i];
        }
    }

    return minElement;
}

int main(){
    int arr[]={4,4,4,3,3,5,5};
    int n = sizeof(arr)/sizeof(int);
    // cout << uniquebyXor(arr,n) << endl;
    // cout<< uniqueElement(arr,n) << endl;
    // elementsWithFreq(arr,n);
    cout<< MinElement(arr,n) << endl;
    return 0;
}   