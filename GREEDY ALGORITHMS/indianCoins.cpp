#include<iostream>
#include<vector>
using namespace std;

void getMinChange(vector<int> coins,int V){ //O(n)
    int ans = 0;
    int n = coins.size();

    for(int i=n-1; i>=0 && V>0; i-- ){ 
        if(V >= coins[i]){
            int numCoin = V/coins[i];
            ans += numCoin;
            cout<<numCoin<<" coin of "<<coins[i]<<endl;
            V = V%coins[i];
        }
    }
    
    cout<<"total no of min. coins : "<<ans<<endl;
}

int main(){
    vector<int> coins = {1,2,5,10,20,50,100,500,2000};
    int V = 1099;

    getMinChange(coins,V);
    return 0;
}

