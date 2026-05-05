#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void majority_element(vector<int> arr){ //O(n) practically
    int n = arr.size();
    unordered_map<int,int> m; //<element,freq>
    for(int i=0;i<n;i++){
        if(m.count(arr[i])){
            m[arr[i]]++;
        }else{
            m[arr[i]] = 1;                            
        }
    }
    for(pair<int,int>p : m){
        if(p.second > (n/3)){
            cout<<p.first;
        }
    }
}


int main(){
    vector<int> arr = {1,3,2,5,1,3,1,5,1};
    majority_element(arr);
}