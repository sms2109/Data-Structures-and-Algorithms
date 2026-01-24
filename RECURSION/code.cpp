#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<"hello karan ! "<<endl;
    print(n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
//print number in decreasing order from n to 1
int decreasingNum(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<" ";
    return decreasingNum(n-1);
}

void increasingNum(int n){
    if(n==0){
        return;
    }
    increasingNum(n-1);
    cout<<n<<" ";
}
//sum of n natural number
int sumN(int n){
    if(n==1){
        return 1;
    }
    return n+sumN(n-1);
}

int main(){
    print(5);
    cout<<factorial(5);
    cout<<endl;
    cout<<decreasingNum(5);
    cout<<endl;
    increasingNum(5);
    cout<<endl;
    cout<<sumN(100);
    return 0;
}