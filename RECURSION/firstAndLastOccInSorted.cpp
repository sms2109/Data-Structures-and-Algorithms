#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>& nums, int target){
    int l = 0, r = nums.size() - 1, ans = -1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(nums[mid] == target){
            ans = mid;
            r = mid - 1;
        } else if(nums[mid] < target){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}


int lastOcc(vector<int>& nums, int target){
    int l = 0, r = nums.size() - 1, ans = -1;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(nums[mid] == target){
            ans = mid;
            l = mid + 1;
        } else if(nums[mid] < target){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}
vector<int> searchRange(vector<int>& nums, int target) {
    if(nums.empty()) return {-1,-1};
    return {firstOcc(nums, target), lastOcc(nums, target)};
}

int main(){
    vector<int> nums  = {1,2,2,3,4};
    vector<int> ans =  searchRange(nums,2);
    cout<<ans[0]<<","<<ans[1];
}