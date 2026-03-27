#include<iostream>
#include<vector>
using namespace std;

int rowWithMaxSum(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();

    int maxSum = INT_MIN;
    int idx = -1;
    for(int i=0;i<m;i++){
        int rowSum = 0;
        for(int j=0;j<n;j++){
            rowSum += mat[i][j];
        }
        if(maxSum < rowSum){
            maxSum = rowSum;
            idx = i;
        }
    }
    return idx;
}

int colWithMaxSum(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();

    int maxSum = INT_MIN;
    int idx = -1;
    for(int j=0;j<n;j++){
        int colSum = 0;
        for(int i=0;i<m;i++){
            colSum += mat[i][j];
        }
        if(colSum > maxSum){
            maxSum = colSum;
            idx = j;
        }
    }
    return idx;
}

int main(){
    vector<vector<int>> mat = {{1,9,7},
                               {9,5,6},
                               {5,18,4}
                            };

    cout<<rowWithMaxSum(mat)<<endl;
    cout<<colWithMaxSum(mat);
    return 0;
}