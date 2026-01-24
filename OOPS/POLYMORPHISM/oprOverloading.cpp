#include<iostream>
using namespace std;    

class Complex{
    int real, imag;
public:
    Complex(int r,int i){
        real = r;
        imag = i;
    }   
    void displayNumber(){
        cout << real << " + " << imag << "i" << endl;
    }

    //operator overloading
    void operator + (Complex &c2){   //here c1 is this pointer and c2 is passed as argument
        int resReal = this->real + c2.real;
        int resImag = this->imag + c2.imag;
        Complex c3(resReal, resImag); 
        cout << "After Addition: ";
        c3.displayNumber();
    }
};

int main(){
    Complex c1(3,4);
    Complex c2(5,7);
    
    cout << "First Complex Number: ";
    c1.displayNumber();
    
    cout << "Second Complex Number: ";
    c2.displayNumber();

    c1 + c2;  // Calls overloaded + operator
    
    return 0;
}

