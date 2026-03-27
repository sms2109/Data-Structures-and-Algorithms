#include <iostream>
#include <vector>
using namespace std;

bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != target[j][n - i - 1])
            {
                return false;
            }
        }
    }
    return true;
}

void rotateMatrix(vector<vector<int>> &mat){
    vector<vector<int>> ans(mat.size(),vector<int>(mat.size()));
    int n = mat.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-i-1] = mat[i][j];
        }
    }
    mat = ans;
}

void PrintMatrix(vector<vector<int>> &mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isRotation(vector<vector<int>> &mat, vector<vector<int>> &target){
    for(int deg = 0;deg<=360;deg+=90){
        if(findRotation(mat,target)){
            return true;
        }
        rotateMatrix(mat);
    }
    return false;
}

int main(){
    vector<vector<int>> mat = {{1,2,3,4},
                           {5,6,7,8},
                           {9,10,11,12},
                           {13,14,15,16}};

    vector<vector<int>> target = {{13,9,5,1},
                                  {14,10,6,2},
                                  {15,11,7,3},
                                  {16,12,8,4}};

    vector<vector<int>> matrix = {{0,0,0},
                                  {0,1,0},
                                  {1,1,1}};

    vector<vector<int>> target2 = {{1,1,1},
                                  {0,1,0},
                                  {0,0,0}};
                          

    // rotateMatrix(mat);
    // PrintMatrix(mat);
    cout<<findRotation(matrix,target2)<<endl;
    cout<<isRotation(matrix,target2)<<endl;
    return 0;
}