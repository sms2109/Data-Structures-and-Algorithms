#include<iostream>
using namespace std;    

class Car {
public:
    string name;
    string color;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
    }

    //custom copy constructor
    Car(const Car &obj) {
        cout << "Copy constructor called!" << endl;
        name = obj.name;
        color = obj.color;
    }
};

int main(){
    Car c1("BMW", "Black"); // parameterized constructor is called here 
    Car c2 = c1; // or Car c2(c1) // copy constructor is called here
    cout << "Car 1 Name: " << c1.name << endl;
    cout << "Car 1 Color: " << c1.color << endl;
    cout << "Car 2 Name: " << c2.name << endl;
    cout << "Car 2 Color: " << c2.color << endl;
    return 0;

}