#include<iostream>
using namespace std;

int majorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int freq = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                freq++;
            }
        }

        if(freq>(n/2)){
            return arr[i];
        }
    }
    return -1;
}

//if array is sorted

int majorityElement2(int arr[],int n){
    int ans = arr[0];
    int freq = 1;
    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1]){
            freq++;
        }else{
            if(freq > n / 2) {
                return ans;
            }
            freq = 1;
            ans = arr[i];
        }
    }
    if(freq > (n/2)){
        return ans;
    }
    return -1;
}

//moores algorithm
//logic:If an element appears more than all other elements combined , it cannot be canceled completely.

int majorityElement3(int arr[], int n) {
    int freq = 0;
    int ans = 0;

    // Phase 1: Find candidate
    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = arr[i];
        }
        if(arr[i] == ans)
            freq++;
        else
            freq--;
    }

    // Phase 2: Verify candidate
    freq = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == ans)
            freq++;
    }

    if(freq > n / 2)
        return ans;

    return -1;
}


int main(){
    int arr[5] = {1,1,2,2,2};
    cout<<majorityElement3(arr,5)<<endl;
    
    return 0;
}