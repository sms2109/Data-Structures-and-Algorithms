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

void matrixMultiplication(vector<vector<int>> mat1,vector<vector<int>> mat2){
    int m1 = mat1.size();
    int n1 = mat1[0].size();
    int m2 = mat2.size();
    int n2 = mat2[0].size();

    if(n1 != m2){
        cout<<"matrix multiplication is not possible"<<endl;
        return;
    }

    vector<vector<int>> mat3(m1,vector<int>(n2));
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n1;k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printMatrix(mat3);
}

int main(){
    vector<vector<int>> mat1 = {{1,2,3},
                                {2,4,2}
                            };

    vector<vector<int>> mat2 = {{7,2,13},
                                {2,5,2},
                                {4,6,3}
                            };         
                            
    printMatrix(mat1);
    printMatrix(mat2);
    matrixMultiplication(mat1,mat2);
    return 0;
}