#include<iostream>
using namespace std;

int decimaltoBinary(int num){
    int pow = 1;
    int sum = 0;
    while(num>0){
        int bindigit = num%2;
        num /= 2;
        sum  += bindigit*pow;
        pow *= 10;
    }
    return sum;
}

int binarytoDecimal(int num){
    int pow=1;
    int sum=0;
    while(num>0){
        int lastdigit = num%10;
        num/=10;
        sum += lastdigit*pow;
        pow *= 2;
    }
    return sum;
}

int main(){
    int Dnum,Bnum;
    cout<<"Enter decimal no : ";
    cin>>Dnum;
    cout<<"Enter binary no : ";
    cin>>Bnum;
    int binaryNum = decimaltoBinary(Dnum);
    int decimalNum = binarytoDecimal(Bnum);
    cout << "Binary no for given " << Dnum << " = " << binaryNum <<endl;
    cout << "Decimal no for given " << Bnum << " = " << decimalNum;
}