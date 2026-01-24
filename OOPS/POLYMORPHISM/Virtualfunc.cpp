#include<iostream>
using namespace std;    

class Parent {
public:
    virtual void show() { // Virtual function
        cout << "Parent class show function called." << endl;
    }
};

class Child : public Parent {
public:
    void show() { // Overriding the virtual function
        cout << "Child class show function called." << endl;
    }
};

int main(){
    Child c1;
    Parent* p; // Base class pointer
    p = &c1;
    p->show(); // Calls Child's show function due to virtual function
    return 0;
}