#include<iostream>
using namespace std;

void clearIbits(int n,int i){
    n = n & (~0 << i);
    cout<<n;
}

int main(){
    int n = 15 , i = 2;
    clearIbits(n,i);
}