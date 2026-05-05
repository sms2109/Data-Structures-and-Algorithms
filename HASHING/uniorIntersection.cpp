#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void findUnion(vector<int> arr1,vector<int> arr2){
    unordered_set<int> s;
    for(auto x : arr1){
        s.insert(x);
    }
    for(auto x : arr2){
        s.insert(x);
    }
    for(auto x : s){
        cout<<x<<" ";
    }
}

void findIntersection(vector<int> arr1,vector<int> arr2){
    unordered_set<int> s1;

    for(int el : arr1){
        s1.insert(el);
    }
    for(int el : arr2){
        if(s1.find(el) != s1.end()){
            cout<<el<<" ";
            s1.erase(el);
        }
    }
}

int main(){
    vector<int> arr1 = {7,3,9};
    vector<int> arr2 = {6,3,9,2,9,4};
    cout<<"union : ";
    findUnion(arr1,arr2);
    cout<<"\nIntersection : ";
    findIntersection(arr1,arr2);
    return 0;
}