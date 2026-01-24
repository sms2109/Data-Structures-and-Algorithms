/*1-d,2-a,3-d,4-c,5-d,6-a,7-a,8-a,9-b,10-c,11-c,12-d,13-b,14-d,15-b,16-d,17-d,
18-c,19-b,20-b,21-d,22-a,23-b,24-b,25-c,26-c,27-b,28-a,29-a,30-b



A class that cannot be instantiated means:

✅ You cannot create an object of that class.
*/

//Q.25
#include<iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor\n";
    }
};

int main() {
    Base* ptr = new Derived();  //A Base class pointer is pointing to a Derived class object.  🎯 WHY do we do this? To achieve runtime polymorphism.
    delete ptr;   // Derived destructor will NOT be called if we not use vitual destructor
}
