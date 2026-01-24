#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
       cout << "Base class show function called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
       cout << "Derived class show function called." << endl;
    }
};

int main(){
    Base *b = new Derived();  // Base class pointer pointing to Derived class object , output depends on object type
    b->show();  // Calls Derived's show() due to virtual function mechanism
    delete b;  // Properly deallocate memory
    return 0;
}