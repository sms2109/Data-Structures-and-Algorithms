#include<iostream>
using namespace std;

int clearIthbit(int n,int i){
   int bitmask = ~(1<<i);
   int ans = n & bitmask;
   return ans;
}


int main(){
    int n = 15;
    int i = 2;
    cout<<clearIthbit(n,i);
}