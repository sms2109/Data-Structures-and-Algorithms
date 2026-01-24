#include<iostream>
using namespace std;

int rem;
int ans=0;
int pow=1;

int dectobin(int n){
    while(n>0){
        rem = n%2;
        n = n/2;
        ans = ans+rem*pow;
        pow=pow*10;
    }
return ans;
}

int main(){

    cout<<dectobin(50);

    return 0;
}

