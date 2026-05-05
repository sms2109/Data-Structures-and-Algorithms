#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    unordered_map<int,int> m;
    int target =  13;
    vector<int> arr = {2,4,5,6,3,9};
    for(int i=0;i<arr.size();i++){
        int comp  = target - arr[i];
        if(m.count(comp)){
            cout<<m[comp]<<","<<i;
        }else{
            m[arr[i]] = i;
        }
    }
    return 0;
}