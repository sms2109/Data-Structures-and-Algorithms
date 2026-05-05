#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void PrintArr(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
    int n = allowedSwaps.size();
    for(int i=0;i<n;i++){
        swap(source[allowedSwaps[i][0]],source[allowedSwaps[i][1]]);
    }
    PrintArr(source);
    int count = 0;
    for(int i=0;i<source.size();i++){
        cout<<source[i]<<" "<<target[i]<<endl;
        if(source[i] == target[i]){
            count++;
        }
    }
    cout<<count;
}

int main(){
    vector<int> source = {5,1,2,4,3};
    vector<int> target = {1,5,4,2,3}; 
    vector<vector<int>> allowedSwaps = {{0,4},{4,2},{1,3},{1,4}};
    minimumHammingDistance(source,target,allowedSwaps);

}