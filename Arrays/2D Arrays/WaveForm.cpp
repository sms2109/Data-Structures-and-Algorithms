#include<iostream>
#include<vector>
using namespace std;

//wave form column wise
void waveFormColumnWise(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();
    for(int j=0;j<n;j++){
        if(j%2 == 0){
            for(int i=0;i<m;i++){
                cout<<mat[i][j]<<" ";
            }
        }else{
            for(int i=m-1;i>=0;i--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

//wave form row wise
void WaveFormRowWise(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();
    for(int i=0;i<m;i++){
        if(i%2 == 0){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
        }else{
            for(int j=n-1;j>=0;j--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int>> mat = {{1,2,3,4},
                               {5,6,7,8},
                               {9,10,11,12},
                               {13,14,15,16}
                            };

    waveFormColumnWise(mat);
    cout<<endl;
    WaveFormRowWise(mat);
    return 0;
}