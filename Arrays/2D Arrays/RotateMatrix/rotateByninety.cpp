#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void PrintMatrix(vector<vector<int>> &mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void RotateByninety(vector<vector<int>> &mat){ //tc:O(n2) sc:O(n2)
    int n = mat.size();
    vector<vector<int>> result(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[j][n-i-1] = mat[i][j];
        }
    }
    PrintMatrix(result);
}

//transpose of a matrix
void transposeMatrix(vector<vector<int>> &mat){
    int n = mat.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    // cout<<"transpose of a matrix is : "<<endl;
    // PrintMatrix(mat);
    
}

//optimized approach // sc : O(1)

void rotate(vector<vector<int>> &mat){
    int n = mat.size();
    //transpose of a matrix
    transposeMatrix(mat);
    //reverse each row
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    cout<<"matrix rotated by 90 degrees is : "<<endl;
    PrintMatrix(mat);

}
int main(){
   vector<vector<int>> mat = {{1,2,3,4},
                           {5,6,7,8},
                           {9,10,11,12},
                           {13,14,15,16}};

    PrintMatrix(mat);
    // RotateByninety(mat);
    // transposeMatrix(mat);
    rotate(mat);
    return 0;
}