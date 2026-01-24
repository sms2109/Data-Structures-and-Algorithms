#include<iostream>
using namespace std;    

class Car {
    string name;
    string color;

public:
    Car(){
        cout<<" default constructor is called . object being created . constructor without parameter"<<endl;
    }
    // Car(string carName, string carColor) {
    //     cout<<"constructor is called . object being created"<<endl;
    //     name = carName;
    //     color = carColor;
    // }
    Car(string name, string color) {
        cout<<" constructor is called . object being created . constructor with parameters"<<endl;
        this->name = name;
        this->color = color;
    }
    void start(){
        cout << "car has started" << endl;
    }
    void stop(){
        cout<<"car has stopped"<<endl;
    }

    //Getter
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }
};

int main(){
    Car c0; // default or non parameterized constructor is called here 
    Car c1("BMW", "Black"); // parameterized constructor is called here 
    Car c2(c1); // copy constructor is called here
    cout << "Car Name: " << c1.getName() << endl;
    cout << "Car Color: " << c1.getColor() << endl;
    c1.start();
    c1.stop();
    cout << "Car Name: " << c2.getName() << endl;
    cout << "Car Color: " << c2.getColor() << endl;
    return 0;
}