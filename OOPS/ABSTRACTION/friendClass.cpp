#include<iostream>
using namespace std;

class A {
    string secret = "Top Secret Data";
    friend class B; // Declaring B as friend class , so that B can access private members of A
    friend void SecretFunction(A &Obj); // Declaring function as friend to access private members of A
};  

class B {
public:
    void revealSecret(A &Obj) { //A &Obj is reference to object of class A
        cout << "Accessing A's private member from B: " << Obj.secret << endl;
    }
};

void SecretFunction(A &Obj) {
    cout << "Accessing A's private member from SecretFunction: " << Obj.secret << endl;
}

int main(){
    A a1;
    B b1;
    b1.revealSecret(a1); // B accessing A's private member

    SecretFunction(a1); // Function accessing A's private member
    return 0;
}