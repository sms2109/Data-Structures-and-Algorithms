#include<iostream>
#include<vector>
using namespace std;

//brute force approach
int RectangleSum(vector<vector<int>> mat,int r1,int c1,int r2,int c2){
    int m = mat.size();
    int n = mat[0].size();
    int sum = 0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
           sum += mat[i][j];
        }
    }
    return sum;
}

void findPrefixSum(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
            mat[i][j] += mat[i][j-1];
        }
    }
}

//by using precalculating the horizontal sum for each row in the matrix
int RectangleSum2(vector<vector<int>> mat,int r1,int c1,int r2,int c2){
    findPrefixSum(mat); //precalculating the horizontal sum for each row in the matrix
    int sum = 0;
    for(int i=r1;i<=r2;i++){
        if(c1>=1){
            sum += mat[i][c2] - mat[i][c1-1];
        }else{
            sum += mat[i][c2];
        }
    }
    return sum;
}
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

void findPrefixSum2D(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(i>0) mat[i][j] += mat[i-1][j];
           if(j>0) mat[i][j] += mat[i][j-1];
           if(i>0 && j>0) mat[i][j] -= mat[i-1][j-1];
        }
    }
   
}

//by using prefixSum2D we can calculate the sum of any rectangle in O(1) time after O(m*n) preprocessing time.
int RectangleSum3(vector<vector<int>> mat,int r1,int c1,int r2,int c2){
    int total = 0 , uppersum = 0 , leftSum = 0 , extraMinus = 0;
    findPrefixSum2D(mat);
    
    total = mat[r2][c2];
    if(r1 > 0){
        uppersum = mat[r1-1][c2];
    }
    if(c1 > 0){
        leftSum = mat[r2][c1-1];
    }
    if(r1 > 0 && c1 > 0){
        extraMinus = mat[r1-1][c1-1];
    }
    
    return total - uppersum - leftSum + extraMinus;
}

int main(){
    vector<vector<int>> mat = {{1,2,3,4,5,6,7},
                                {8,9,10,11,12,13,14},
                                {15,16,17,18,19,20,21},
                                {22,23,24,25,26,27,28},
                                {29,30,31,32,33,34,35},
                                {36,37,38,39,40,41,42},  
                             };

    int r1 = 0 , c1 = 0 , r2 = 2 , c2 = 2;
    // printMatrix(mat);
    cout<<RectangleSum(mat,r1,c1,r2,c2)<<endl;
    cout<<RectangleSum2(mat,r1,c1,r2,c2)<<endl;
    // findPrefixSum2D(mat);
    cout<<RectangleSum3(mat,r1,c1,r2,c2)<<endl;
    
    return 0;
}