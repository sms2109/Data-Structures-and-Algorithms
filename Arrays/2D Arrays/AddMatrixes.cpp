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

void addMatrixes(vector<vector<int>> &mat1, vector<vector<int>> &mat2){
    int m = mat1.size();
    int n = mat1[0].size();

    vector<vector<int>> sum(m, vector<int>(n, 0));

    if(mat1.size()!=mat2.size() || mat1[0].size()!=mat2[0].size()){
        cout<<"Matrixes should be of same size";
        return;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printMatrix(sum);
}

int main(){
    vector<vector<int>> mat1 = {{1,2,3},
                                {4,5,6},
                                {7,8,9}
                            };

    vector<vector<int>> mat2 = {{9,8,7},
                                {6,5,4},
                                {3,2,1}
                            };

    printMatrix(mat1);
    printMatrix(mat2);
    addMatrixes(mat1,mat2);
    return 0;
}