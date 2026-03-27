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

void rotate(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();
    //reverse colums
    for(int j=0;j<n;j++){
        int st = 0, end = m-1;
        while(st<end){
            swap(mat[st][j],mat[end][j]);
            st++; end--;
        }
    }
    
    //reverse rows
    for(int i=0;i<m;i++){
        int st = 0, end = n-1;
        while(st<end){
            swap(mat[i][st],mat[i][end]);
            st++; end--;
        }
    }
    printMatrix(mat);
}

int main(){
    vector<vector<int>> mat = {{1,2,3,4},
                               {5,6,7,8},
                               {9,10,11,12},
                               {13,14,15,16}
                            };

    printMatrix(mat);
    rotate(mat);
    return 0;
}