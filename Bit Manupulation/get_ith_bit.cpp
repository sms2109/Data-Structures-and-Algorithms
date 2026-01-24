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

int main(){
    int n = 14;
    int i = 2;
    cout << "The " << i << "th bit of " << n << " is: " << getIthBit(n, i) << endl;
    return 0;
}