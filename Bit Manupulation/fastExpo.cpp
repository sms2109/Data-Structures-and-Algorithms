#include<iostream>
using namespace std;

void fastExpo(int x,int n){  //O(logn)
    int ans = 1;
    
    while(n>0){
        int lastBit = n & 1;
        if(lastBit){
            ans = ans * x;
        }
        x = x*x;
        n = n >> 1;
    }
    cout<<ans<<endl;
}

int main(){
    int x = 5;
    int n = 4;
    fastExpo(x,n);
}