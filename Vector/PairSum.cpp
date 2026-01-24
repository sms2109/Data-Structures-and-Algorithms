#include<iostream>
#include<vector>
using namespace std;

//brute force approch O(n2)
void pairSum(vector<int> arr,int target){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<")";
            if(arr[i]+arr[j]==target){
                cout<<"("<<i<<","<<j<<")";
            }
        }
        // cout<<endl;
    }
}

//optimal approch O(n) //given array is sorted
vector<int> pairSum2(vector<int> arr,int target){
    int st = 0,end=arr.size()-1;
    int sum = 0;
    vector<int> ans;

    while(st<end){
        sum = arr[st] + arr[end];
        if(sum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(sum>target){
            end--;
        }
        else{
            st++;
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {2,7,11,15};
    int target = 9;
    // pairSum(vec,target);
    vector<int> ans = pairSum2(vec,target);
    cout<<"("<<ans[0]<<","<<ans[1]<<")";
    return 0;
}