#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nextGreaterElement(vector<int> arr){
    vector<int> ans = {0,0,0,0,0};
    stack<int> s;
    int n = arr.size();
    ans[n-1] = -1;
    s.push(arr[n-1]);

    for(int i=n-2 ; i>=0 ; i--){
        while(!s.empty() && arr[i] >= s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

}
int main(){
    vector<int> arr = {6,8,0,1,3};
    nextGreaterElement(arr);
    return 0;
}