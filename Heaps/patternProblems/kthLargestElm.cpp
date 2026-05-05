#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void KthLargestElement(vector<int> arr,int k){
    priority_queue<int> pq(arr.begin(),arr.end()); //O(N)
    int ans;
    for(int i=0;i<k;i++){ //O(KLOGN)
        ans = pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
}

//best and optimal approach (min heap) // O(nlogk)
void KthLargestElement2(vector<int> arr,int k){
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }
    cout<<k<<"th largest element :  "<<pq.top()<<endl;
}

void KthSmallestElement(vector<int> arr,int k){
    priority_queue<int> pq;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }
    cout<<k<<"th smallest element :  "<<pq.top()<<endl;
}

int main(){
    vector<int> arr = {9,2,4,5,6,3};
    int k = 2;
    // KthLargestElement(arr,k);
    KthLargestElement2(arr,k);
    KthSmallestElement(arr,k);
    return 0;
}