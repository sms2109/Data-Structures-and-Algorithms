#include<iostream>
using namespace std;

void counter(){
    static int count = 0; // static variable to retain value between calls , in memory it is declared only once
    count++;
    cout << "Counter: " << count << endl;
}

class Example {
public:
   static int x; // static data member declaration , accessed by all objects of class
};

int Example::x = 0; // static data member definition and initialization

int main(){
    counter(); 
    counter(); 
    counter(); 

    Example e1, e2, e3;
    cout << "e1.x: " << e1.x++ << endl; // 0
    cout << "e2.x: " << e2.x++ << endl; // 1
    cout << "e3.x: " << e3.x++ << endl; // 2
    cout << "e3.x: " << e3.x << endl; // 3
    return 0;
}