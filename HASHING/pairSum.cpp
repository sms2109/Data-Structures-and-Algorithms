#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void pairSum(vector<int> arr,int target){
    int n = arr.size();
    unordered_map<int,int> m;                                           
    for(int i=0;i<n;i++){
        int comp = target - arr[i];
        if(m.count(comp)){
            cout<<m[comp]<<","<<i;
        }else{
            m[arr[i]] = i;
        }
    }
}
int main(){
    vector<int> arr = {1,2,7,11,15,5,9};
    int target  = 14;
    pairSum(arr,target);
}