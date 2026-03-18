#include<iostream>
#include<vector>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
// void countSort(int arr[], int n){
//     int freq[100000]; //range
//     int minVal = INT_MAX , maxVal = INT_MIN;         
//     //1st step : frequency array
//     for(int i=0; i<=maxVal - minVal; i++){
//         freq[arr[i]]++;
//         minVal = min(minVal, arr[i]);
//         maxVal = max(maxVal, arr[i]);
//     }
//     //2nd step : modify frequency array
//     for(int i=minVal,j=0; i<=maxVal; i++){
//         while(freq[i]>0){
//             arr[j++] = i;
//             freq[i]--;
//         }
//     }
//     printarr(arr,n);
// }

void countSort2(int arr[],int n,int maxEle){
    vector<int> freq(maxEle+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int index = 0;
    for(int i=0;i<=maxEle;i++){
        while(freq[i]>0){
            arr[index] = i;
            index++;
            freq[i]--;
        }
    }
    printarr(arr,n);
}
int main(){
    int arr[8] = {4,2,2,8,3,3,1,7};
    int maxEle = arr[0];
    for(int i=1;i<8;i++){
       maxEle = max(arr[i],maxEle);
    }
    // cout<<maxEle;
    countSort2(arr,8,maxEle);
    return 0;
}