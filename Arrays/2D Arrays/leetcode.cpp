#include<iostream>
#include<vector>
using namespace std;

void printMatrix(vector<vector<int>> &arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void updateMatrix(vector<vector<int>>& mat){
        int m = mat.size();
        int n = mat[0].size();
        //left shift on even rows
        for(int i=0;i<m;i=i+2){
            mat[i].push_back(mat[i][0]);
            mat[i].erase(mat[i].begin());
        }

        //right shift on odd rows
        for(int i=1;i<m;i=i+2){
            int temp = mat[i][n-1];
            mat[i].pop_back();
            mat[i].insert(mat[i].begin(),temp);
        }
}
bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        ans = mat;
        for(int i=0;i<k;i++){
           updateMatrix(ans);
        }
        if(ans == mat){
            return true;
        }
        return false;
}

int main(){
        vector<vector<int>> arr = {{1,2,4,2},{535,33,5,5},{5,3,6,3}};
        int k = 2;
        if(areSimilar(arr,k)){
            cout<<"Similar"<<endl;
        }
        else{
            cout<<"Not Similar"<<endl;
        }
        
    
        return 0;
}