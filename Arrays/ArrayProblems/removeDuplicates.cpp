#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

//best approach
void removeDuplicates(vector<int> arr){ //O(n) 
    int j = 1;
    for(int i=1;i<arr.size();i++){
        if(arr[i] != arr[j-1]){
            arr[j] = arr[i];
            j++;
        }
    }

    arr.resize(j);
    printVector(arr);
}

//using set
void removeDuplicates2(vector<int> arr){ //O(nlogn) 
    set<int> s(arr.begin(),arr.end());
    arr.assign(s.begin(),s.end());
    printVector(arr);
} 

//using v.erase function 
void removeDuplicates3(vector<int> arr){ //O(n2) 
    for(int i=1;i<arr.size();i++){
        if(arr[i] == arr[i-1]){
            arr.erase(arr.begin() + i);
            i--;
        }
    }
    printVector(arr);
} 
    

int main(){
    vector<int> numbers = {0,0,1,1,2,2,3,3,3,5,4,4};
    removeDuplicates(numbers);
    removeDuplicates2(numbers);
    removeDuplicates3(numbers);
    return 0;
}