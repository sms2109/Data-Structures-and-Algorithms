#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int arr[8] = {4,2,2,8,3,3,1,7};
    // sort(arr,arr+8);//full array sort
    // print(arr,8);
    // cout<<endl;
    // sort(arr+2,arr+5);//partial array sort
    // print(arr,8);
    // cout<<endl;
    sort(arr,arr+8,greater<int>()); //sort in descending order
    print(arr,8);
    return 0;
}