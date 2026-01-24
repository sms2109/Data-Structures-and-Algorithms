#include<iostream>
#include<vector>
using namespace std;

int singleNo(int arr[],int n){
    for(int i=0;i<n;i++){
        int count = 0;
        cout<<arr[i]<<endl;
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout<<endl;
        cout<<"count = "<<count<<endl;
        if(count==1){
            return arr[i];
        }
    }
    return -1;
}

int singleNousingXor(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,7,2,1};
    cout<<singleNo(arr,5)<<endl;
    cout<<"ans by using xor function "<<endl;
    cout<<singleNousingXor(arr,5)<<endl;
    return 0;
}