#include<iostream>
#include<vector>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int sum = 0;
        vector<int> ans;
        for(int st=0;st<arr.size();st++){
            for(int end=st;end<arr.size();end++){
                for(int i = st;i<=end;i++){
                    sum += arr[i];
                }
                if(sum == target){
                    ans.push_back(st);
                    ans.push_back(end);
                    return ans;
                }
                sum = 0; 
            }
        }
        return ans;
    }

int main(){
    vector<int> arr = {1,2,3,7,5};
    int target = 29;
    vector<int> result = subarraySum(arr, target);
    if(!result.empty()){
        cout << "Subarray found from index " << result[0] << " to " << result[1] << endl;
    } else {
        cout << "No subarray found with the given sum." << endl;
    }
    return 0;
}