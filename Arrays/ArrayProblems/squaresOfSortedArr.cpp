#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

vector<int> sortedSquares(vector<int> &nums){
    int n = nums.size();
    int left = 0 , right = n-1 , k = n-1;
    vector<int> result(n);
    while(left<=right){
        int leftsq = nums[left] * nums[left];
        int rightsq = nums[right] * nums[right];

        if(leftsq > rightsq){
            result[k] = leftsq;
            left++;
        }else{
            result[k] = rightsq;
            right--;
        }
        k--;
    }
    return result;
}

int main(){
    vector<int> arr = {-4,-1,0,3,10};
    printVector(arr);
    vector<int> ans = sortedSquares(arr);
    printVector(ans);
}