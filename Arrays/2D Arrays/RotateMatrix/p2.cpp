#include <iostream>
#include <vector>
using namespace std;

void findWays(int r,int c,int n,int m,string ans,vector<vector<int>> &mat,int mul,int &maxi){
    if(r>=n || c>=m){
        return;
    }
    mul *= mat[r][c];

    if(r == n-1 && c == m-1){
        cout<<"path : "<<ans<<endl;
        cout<<"mul : "<<mul<<endl;
        maxi = max(maxi,mul);
        
        return;
    }

    findWays(r,c+1,n,m,ans+'R',mat,mul,maxi); //right
    findWays(r+1,c,n,m,ans+'D',mat,mul,maxi);  //downca
}

int main(){
    vector<vector<int>> mat = {{1,2,3},
                               {4,5,6},
                               {7,8,9}
                            };

    vector<vector<int>> mat2 = {{1,-2,1},
                                {1,-2,1},
                                {3,-4,1}
                            };

    int maxi = INT_MIN;
    findWays(0,0,3,3," ",mat2,1,maxi);
    cout<<"max product : "<<maxi<<endl;
    return 0;
}