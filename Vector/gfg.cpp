// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        for(int st=0;st<n;st++){
            int sum = 0;
            for(int end=st;end<n;end++){
                sum += arr[end];
                if(sum>target){
                    break;
                }
                if(sum==target){
                    return {st+1,end+1};
                }
            }
        }

        return {-1};
    }
int main() {
    // Write C++ code here
    vector<int> arr = {5,3,4};
    int target = 2;
    vector<int> ans = subarraySum(arr,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}