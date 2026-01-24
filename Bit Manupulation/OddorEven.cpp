#include<iostream>
using namespace std;

void checkOddEven(int n){
    if(n & 1){
        cout<<n<<" is Odd"<<endl;
    }
    else{
        cout<<n<<" is Even"<<endl;
    }
}

int main(){
    checkOddEven(5);
    checkOddEven(8);
}