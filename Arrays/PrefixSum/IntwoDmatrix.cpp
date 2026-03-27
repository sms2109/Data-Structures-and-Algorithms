#include<iostream>
#include<vector>
using namespace std;

void printMatrix(vector<vector<int>> mat){
    int m = mat.size();
    int n = mat[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void prefixSum2D(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>> prefix(m, vector<int>(n, 0));

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            prefix[i][j] = mat[i][j];

            if(i > 0) prefix[i][j] += prefix[i-1][j];
            if(j > 0) prefix[i][j] += prefix[i][j-1];
            if(i > 0 && j > 0) prefix[i][j] -= prefix[i-1][j-1];
        }
    }

    printMatrix(prefix);
}

int main(){
    vector<vector<int>> mat = {{1,2,3},
                               {4,5,6},
                               {15,3,3}
                            };

    printMatrix(mat);
    prefixSum2D(mat);
    return 0;

}