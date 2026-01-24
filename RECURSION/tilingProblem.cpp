// Tiling Problem: Given a 2 x N board and tiles of size 2 x 1, count the number of ways to tile the board.

#include<iostream>
using namespace std;

int tilingWays(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    } 

    //recursion
    //vertical choice
    int vertical = tilingWays(n-1);
    //horizontal choice
    int horizontal = tilingWays(n-2);

    return vertical + horizontal;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Number of ways to tile the board is: "<<tilingWays(n)<<endl;
    return 0;
}