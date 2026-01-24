#include<iostream>
using namespace std;

int  sumofDigits(int num){
    int digitsum=0;
    while(num>0){
        int lastdigits = num%10;
        num=num/10;
        digitsum += lastdigits;  
     
    }
    return digitsum;
    
   
}
int main(){

    cout<<sumofDigits(145);

    return 0;
}