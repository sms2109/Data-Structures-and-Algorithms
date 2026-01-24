#include<iostream>
using namespace std;

int main(){
    long n=5,x=3,ans=1;
    if(n<0){
        x=1/x;
        n=-n;
    }
    while(n>0){
        if(n%2==1){
            ans*=x;
        }
        x*=x;
        n/=2;
    }
    cout<<ans;
    return 0;
}