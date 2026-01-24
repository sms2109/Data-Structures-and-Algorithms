#include<iostream>
using namespace std;

//O(logn)
int pow(int x,int n){
    if(n==0){
        return 1;
    }

    int halfPow = pow(x,n/2);
    int halfPowSquare = halfPow * halfPow;

    if(n%2 != 0){
        //odd
        return x * halfPowSquare;
    }
    return halfPowSquare;
}
int main(){
    int x = 2;
    int n = 10;

    cout<<pow(x,n);
    return 0;
}

//homework-do by loop,bitmaupulation,recursion x*x* ..ntimes,O(n)