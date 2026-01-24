#include<iostream>
using namespace std;

int powerofany(int n){  //withour using bitwise operator
    if(n<=0){
        return 0;
    }
    while(n%3==0){
        n = n/3;
    }
    if(n==1){
        return 1;
    }
    return 0;
    
}

int powerofTwo(int n){  //using bitwise operator
    if(n<=0){
        return 0;
    }
    if((n & (n-1))==0){
        return 1;
    }
    return 0;
}
int main(){
    int n = 24;
    cout << powerofany(n);  
}