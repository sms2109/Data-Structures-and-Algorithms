#include<iostream>
using namespace std;    

class Car {
public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation
        *mileage = 12;
    }

    Car(const Car &obj) {
        cout << "Copy constructor called!" << endl;
        name = obj.name;
        color = obj.color;
        mileage = new int;
        *mileage = *obj.mileage;
    }
};

int main(){
    Car c1("BMW", "Black"); // parameterized constructor is called here 
    Car c2 = c1; // or Car c2(c1) // copy constructor is called here
    cout << "Car 2 Name: " << c2.name << endl;
    cout << "Car 2 Color: " << c2.color << endl;
    cout << "Car 2 Mileage: " << *c2.mileage << endl;
    *c2.mileage = 10; 
    cout<<"After changes in c2 mileage "<<endl;
    cout << "Car 1 Mileage: " << *c1.mileage << endl;
    cout << "Car 2 Mileage: " << *c2.mileage << endl;
    return 0;

}