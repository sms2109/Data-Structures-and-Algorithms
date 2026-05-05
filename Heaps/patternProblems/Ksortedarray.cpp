#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void printVector(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void kSorted_array(vector<int> nums,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> Sorted;
    for(int i=0;i<=k;i++){
        pq.push(nums[i]);
    }
    for(int i=k+1;i<nums.size();i++){
        Sorted.push_back(pq.top());
        pq.pop();

        pq.push(nums[i]);
    }
    while(!pq.empty()){
        Sorted.push_back(pq.top());
        pq.pop();
    }

    printVector(Sorted);
}

int main(){
    vector<int> nums = {6,5,3,2,8,10,9};
    int k = 3;
    printVector(nums);
    kSorted_array(nums,k);
    return 0;
}