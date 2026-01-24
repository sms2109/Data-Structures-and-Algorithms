//find total ways in which n friends can be paired up each friend can only paired once

#include<iostream>
using namespace std;

int friendsPairing(int n){
    if(n==1 || n==2){
        return n;
    }
    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
}

int main(){
    cout<<friendsPairing(5)<<endl;
    return 0;
}