#include<iostream>
using namespace std;

int setIthbit(int n,int i){
    int mask = 1 << i;
    int ans = n | mask;
    return ans;
}

int main(){
    int n = 6;
    int i = 3 ;
    cout<<setIthbit(n,i);
    return 0;
}