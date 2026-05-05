#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> kMostFrequent(vector<int> nums,int k){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<int> ans;
    priority_queue<pair<int,int>> pq;
    int count = 1;
    for(int i=1;i<n;i++){
        if(nums[i] == nums[i-1]){
            count++;
        }
        else{
            pq.push({count,nums[i-1]});
            count = 1;
        }
    }
    pq.push({count,nums[n-1]});
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;

}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> result = kMostFrequent(nums,k);
    for(int x : result){
        cout<<x<<" ";
    }
    return 0;
}