#include<iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main(){
    Print obj1;
    obj1.display(42);          // Calls display(int)
    obj1.display(3.14);       // Calls display(double)
    obj1.display("Hello");    // Calls display(string)
    return 0;
}