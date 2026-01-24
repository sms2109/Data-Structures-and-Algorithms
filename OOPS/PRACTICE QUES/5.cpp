#include<iostream>
using namespace std;

class Complex{
    int real,imag;

public:
    Complex(int r,int i){
        real = r;
        imag = i;
    }
    void displayNumber(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    Complex operator - (Complex &c2){
        int resReal = this->real - c2.real;
        int resImag = this->imag - c2.imag;
        Complex c3(resReal,resImag);
        return c3;
    }
};

int main(){
    Complex c1(9,5);
    Complex c2(4,2);
    c1.displayNumber();
    c2.displayNumber();
    Complex c3 = c1 - c2;
    c3.displayNumber();
    return 0;
}