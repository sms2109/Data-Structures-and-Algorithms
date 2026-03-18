#include<iostream>
using namespace std;

int clearithBit(int n,int i){
    int bitmask = ~(1<<i);
    int ans = n & bitmask;
    return ans;
}

void clearbitsInRange(int i,int j,int n){
    for(int k=i;k<=j;k++){
        n = clearithBit(n,k);
    }
    cout<<n<<endl;
}

//optimize

int clearbitsInRange2(int i,int j,int n){
    int a = (~0 << j+1);  // add zeros in places of no.st->rangeEnd
    int b = (1<<i) - 1;  // add ones start to rangeSt(i);
    int bitmask = a | b;
    int ans = n & bitmask;
    return ans;
}

int main(){
    int n = 245;
    clearbitsInRange(1,6,n);
    cout<<clearbitsInRange2(1,6,n);
    return 0;
}