#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void moveZeros(vector<int> nums){ //O(n)
    int j = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    printVector(nums);
}

//using extra space
void moveZeros2(vector<int> nums){ //O(n)
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            ans.push_back(nums[i]);
        }
    }
    while(ans.size() < nums.size()){
        ans.push_back(0);
    }
    printVector(ans);
}

//using v.erase function
void moveZeros3(vector<int> nums){ //O(n2)
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            nums.erase(nums.begin() + i);
            nums.push_back(0);
            i--;
        }
    }
    printVector(nums);
}

int main(){
    vector<int> nums = {0,1,0,3,12};
    moveZeros(nums);
    moveZeros2(nums);
    moveZeros3(nums);
    return 0;
}