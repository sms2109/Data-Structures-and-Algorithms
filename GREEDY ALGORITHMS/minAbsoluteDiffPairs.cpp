#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minAbsoluteDifference(vector<int> A,vector<int> B){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n = A.size();

    int absDiff = 0;

    for(int i=0;i<n;i++){
        absDiff += abs(A[i] - B[i]);
    }
    
    return absDiff;
}

int main(){
    vector<int> A = {4,1,8,7};
    vector<int> B = {2,3,6,5};
    cout<<minAbsoluteDifference(A,B);
    return 0;
}