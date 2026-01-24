#include<iostream>
using namespace std;

int rem;
int ans=0;
int pow=1;

int bintodec(int n){
    while(n>0){
        rem = n%10;
        n = n/10;
        ans = ans+rem*pow;
        pow=pow*2;
    }
return ans;
}

int main(){

    cout<<bintodec(1111);

    return 0;
}