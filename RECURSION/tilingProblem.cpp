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

//if given 3 x N board and tiles of size 3 x 1, count the number of ways to tile the board.
int tilingWays3(int n){
    //base case
    if(n==0 || n==1 || n==2){
        return 1;
    } 

    //recursion
    //vertical choice
    int vertical = tilingWays3(n-1);
    //horizontal choice
    int horizontal = tilingWays3(n-3);

    return vertical + horizontal;
}

//if given 4 x N board and tiles of size 4 x 1, count the number of ways to tile the board.
int tilingWays4(int n){
    //base case
    if(n==0 || n==1 || n==2 || n==3){
        return 1;
    } 

    //recursion
    //vertical choice
    int vertical = tilingWays4(n-1);
    //horizontal choice
    int horizontal = tilingWays4(n-4);

    return vertical + horizontal;
}

// if given M x N board and tiles of size M x 1, count the number of ways to tile the board.
int tilingWaysMN(int m,int n){  
    //base case
    if(n==0 || n==1 || n==2 || n==3){
        return 1;
    } 

    //recursion
    //vertical choice
    int vertical = tilingWaysMN(m,n-1);
    //horizontal choice
    int horizontal = tilingWaysMN(m,n-m);

    return vertical + horizontal;
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Number of ways to tile the board is: "<<tilingWays(n)<<endl;
    return 0;
}