#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][5],int m,int n){
    int srow = 0 , erow = m-1 , scol = 0 , ecol = n-1;

    while(srow<=erow && scol<=ecol){
        //top
        for(int j=scol;j<=ecol;j++){
            cout<<matrix[srow][j]<<" ";
        } 
        //right
        for(int i=srow+1;i<=erow;i++){
            cout<<matrix[i][ecol]<<" ";
        }
        //bottom
        for(int j=ecol-1;j>=scol;j--){
            if(srow == erow){
                break;
            }
            cout<<matrix[erow][j]<<" ";
        }
        //left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol == ecol){
                break;
            }
            cout<<matrix[i][scol]<<" ";
        }

        srow++; erow--;
        scol++; ecol--;
    }
}

int k = 2;
void subMatrixes(int matrix[][4],int m,int n){
     for(int i = 0; i <= n - k; i++){
        for(int j = 0; j <= m - k; j++){

            cout << "Submatrix:\n";

            for(int x = i; x < i + k; x++){
                for(int y = j; y < j + k; y++){
                    cout << matrix[x][y] << " ";
                }
                cout << endl;
            }

            cout << "----\n";
        }
    }
}

int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}
                    };

    int matrix2[3][5] = {{1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15}
                    };

    // spiralMatrix(matrix2,3,5);
    subMatrixes(matrix,4,4);
}