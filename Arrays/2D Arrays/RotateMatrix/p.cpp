#include <iostream>
#include <vector>
using namespace std;

void findWays(int r,int c,int n,int m,string ans,vector<vector<int>> &mat,int sum){

    if(r>=n || c>=m){
        return;
    }

    sum += mat[r][c];

    if(r == n-1 && c == m-1){
        cout<<ans<<endl;
        cout<<sum<<endl;
        
        return;
    }

    findWays(r,c+1,n,m,ans+'R',mat,sum); //right
    findWays(r+1,c,n,m,ans+'D',mat,sum);  //down
}

int main(){
    vector<vector<int>> mat = {{1,2,3},
                               {4,5,6},
                               {7,8,9}
                            };

    findWays(0,0,3,3," ",mat,0);
    return 0;
}