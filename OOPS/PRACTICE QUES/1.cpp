#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"A's constructor"<<endl;
    }
    ~A(){
        cout<<"A's destructor"<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"B's constructor"<<endl;
    }
    ~B(){
        cout<<"B's destructor"<<endl;
    }
};

int main(){
    B b1;
    return 0;
}

//because of inheritance first base class constructor is called then derived class constructor , 
//and in case of destructor first derived class destructor is called then base class destructor is called.