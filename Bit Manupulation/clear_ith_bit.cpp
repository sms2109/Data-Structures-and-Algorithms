#include<iostream>
using namespace std;

int clearIthbit(int n,int i){
   int bitmask = ~(1<<i);
   int ans = n & bitmask;
   return ans;
}

//my method
// int getIthBit(int n,int i){
//     int bitmask = 1<<i;
//     if(n & bitmask){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int clearIthbit(int n,int i){
//     if(getIthBit(n,i)){
//         int bitmask = 1<<i;
//         int ans = n ^ bitmask;
//         return ans;
//     }
//     return n;
// }

int main(){
    int n = 15;
    int i = 2;
    cout<<clearIthbit(n,i);
}