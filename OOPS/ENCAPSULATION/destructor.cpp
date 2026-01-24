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
    ~Car() {
        cout << "deleting objects ... " << endl;
        if (mileage != NULL){
            delete mileage; // free the dynamically allocated memory
            mileage = NULL;
        }
    }
};

int main(){
    Car c1("BMW", "Black"); 
    cout << "Car 1 Name: " << c1.name << endl;
    cout << "Car 1 Color: " << c1.color << endl;
    cout << "Car 1 Mileage: " << *c1.mileage << endl;
    
    return 0;

}