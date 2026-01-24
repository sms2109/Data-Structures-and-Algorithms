#include<iostream>
using namespace std;

int Factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n=Factorial(n);
    int fact_r=Factorial(r);
    int fact_nmr=Factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}
int main(){
    int  n=8;
    int r=2;
    cout<<"The value of nCr is :  "<<nCr(n,r);
    return 0;
}