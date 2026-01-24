#include<iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class show function called." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child class show function called." << endl;
    }
};
 
int main(){
    Child c1;
    c1.show(); // Calls Child's show function
    // c1.Parent::show(); // Calls Parent's show function
    return 0;
}