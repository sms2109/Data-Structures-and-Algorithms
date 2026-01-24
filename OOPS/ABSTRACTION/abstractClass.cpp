#include<iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0; //abstract function or pure virtual function
};

class Circle : public Shape {
public:
    void draw(){ // Implementing the abstract function
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw(){ // Implementing the abstract function
        cout << "Drawing Square" << endl;
    }
};

int main(){
    Circle cir1;
    cir1.draw(); // Calls Circle's draw function
    Square sq1;
    sq1.draw(); // Calls Square's draw function
    // Shape s1; // Error: cannot instantiate abstract class
    // s1.draw(); // Error: cannot call abstract function
    return 0;
}