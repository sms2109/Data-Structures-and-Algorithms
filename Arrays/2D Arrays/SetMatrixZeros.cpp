#include<iostream>
using namespace std;

void printMatrix(int arr[][4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//using a copy of original array to traverse and check for 0's // brute force approach // uses extra space space complexity O(m*n) // time complexity O(m×n×(m+n))
void setMatrixZeros(int matrix[][4],int m,int n){
    int copy[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            copy[i][j] = matrix[i][j]; 
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(copy[i][j] == 0){
                for(int a = 0;a<n;a++){
                    matrix[i][a] = 0;
                }
                for(int b = 0;b<m;b++){
                    matrix[b][j] = 0;
                }
            }
        }
    }
}

//method2:Using less space  tc:O(m*n) , sc:O(m+n)

void UsinglessSpace(int matrix[][4],int m,int n){
    bool row[m] = {false};
    bool col[n] = {false};
    
    //marking
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == 0){
                row[i] = true;
                col[j] = true;
            }
        }
    }

    //set
    for(int i=0;i<m;i++){
        if(row[i] == true){
            for(int j=0;j<n;j++){
                matrix[i][j] = 0;
            }
        }
    }

    for(int j=0;j<n;j++){
        if(col[j] == true){
            for(int i=0;i<m;i++){
                matrix[i][j] = 0;
            }
        }
    }
}

//method 3:using constant extra space (optimized solution)
//use 0th row and 0th col as extra space

void OptimizedSol(int matrix[][4],int m,int n){  //tc:O(m*n) sc:O(1)
    //problem if 0th row and 0th col have zeros then we have to set them to zero as well

    bool zeroRows = false;
    bool zeroCols = false;

    //check the 0th row and 0th cols
    for(int j=0;j<n;j++){
        if(matrix[0][j] == 0){
            zeroRows = true;
            break;
        }
    }

    for(int i=0;i<m;i++){
        if(matrix[i][0] == 0){
            zeroCols = true;
            break;
        }
    }

    //travel in sub matrix
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j] == 0){
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    //traverse the 0th row
    for(int j=1;j<n;j++){
        if(matrix[0][j] == 0){
            for(int i=1;i<m;i++){
                matrix[i][j] = 0;
            }
        }
    }

    //traverse the 0th column
    for(int i=1;i<m;i++){
        if(matrix[i][0] == 0){
            for(int j=1;j<n;j++){
                matrix[i][j] = 0;
            }
        }
    }
    
    //set the 0th row and 0th col to zero if they have zeros
    if(zeroRows == true){
        for(int j=0;j<n;j++){
            matrix[0][j] = 0;
        }
    }

    if(zeroCols == true){
        for(int i=0;i<m;i++){
            matrix[i][0] = 0;
        }
    }

}


int main(){
    int matrix[3][4] = {{0,1,2,0},
                        {3,4,5,2},
                        {1,3,1,5}
                    };

    int matrix2[4][5] = {{1,2,2,11,21},
                        {3,0,24,21,9},
                        {6,10,7,0,-8},
                        {8,4,19,3,99}
                    };

    int m1 = 3 , n1 = 4;
    int m2 = 4 , n2 = 5;

    cout<<"Before Set matrix Zeros : "<<endl;
    printMatrix(matrix,3,4);
    cout<<"After Set matrix Zeros : "<<endl;

    //md1
    // setMatrixZeros(matrix,3,4);
    // printMatrix(matrix,3,4);
    
    //md2
    // UsinglessSpace(matrix,3,4);
    // printMatrix(matrix,3,4);

    // md3
    // OptimizedSol(matrix2,4,5);
    // printMatrix(matrix2,4,5);
    OptimizedSol(matrix,3,4);
    printMatrix(matrix,3,4);
    return 0;
}