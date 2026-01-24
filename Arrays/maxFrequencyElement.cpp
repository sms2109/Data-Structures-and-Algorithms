#include<iostream>
using namespace std;

//find the element that appears the maximum number of times in an array(even if it is not more than n/2)
//brute force
int maxFrequencyElement(int arr[], int n) {
    int maxFreq = 0;
    int ans = arr[0];

    for(int i = 0; i < n; i++) {
        int freq = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
        }

        if(freq > maxFreq) {
            maxFreq = freq;
            ans = arr[i];
        }
    }
    return ans;
}

//if array is sorrted
//In a sorted array, same elements come together (contiguous). {1,2,2,3,3,3,4,4}

int maxFrequencyElement2(int arr[], int n) {
    int maxFreq = 1;
    int currFreq = 1;
    int ans = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) {
            currFreq++;
        } else {
            currFreq = 1;
        }

        if(currFreq > maxFreq) {
            maxFreq = currFreq;
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    int arr[5] = {1,1,1,2,2}; //array sorted
    cout<<maxFrequencyElement2(arr,5);
}