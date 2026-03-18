#include<iostream>
using namespace std;

int getIthBit(int n,int i){
    int bitmask = 1<<i;
    if(n & bitmask){
        return 1;
    }
    else{
        return 0;
    }
}

int getIthBit2(int n,int i){
    if(n>>i & 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n = 14;
    int i = 2;
    cout << "The " << i << "th bit of " << n << " is: " << getIthBit(n, i) << endl;
    cout << "The " << i << "th bit of " << n << " is: " << getIthBit2(n, i) << endl;
    return 0;
}