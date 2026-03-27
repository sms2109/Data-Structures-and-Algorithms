#include<iostream>
#include<vector>
using namespace std;

void binarySearch(vector<vector<int>> mat,int target){
    int m = mat.size();
    int n = mat[0].size();

    for(int i=0;i<m;i++){
        if(mat[i][0] <= target && mat[i][n-1] >= target){
            int st = 0;
            int end = n-1;
            while(st<=end){
                int mid = (st+end)/2;
                if(target == mat[i][mid]){
                    cout<<i<<","<<mid;
                    break;
                }else if(target < mat[i][mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }
        }
    }
}

int main(){
    vector<vector<int>> mat = {{10,20,30,40},
                               {55,57,65,68},
                               {71,79,81,88},
                               {92,93,99,100}
                            };

    int target = 81;
    binarySearch(mat,target);
}