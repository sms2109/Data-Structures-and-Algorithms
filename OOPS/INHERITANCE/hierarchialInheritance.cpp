#include<iostream>
using namespace std;    

class Animal {
public:
    void breath(){
        cout << "breathes" << endl;
    }
    void eat(){
        cout<<"eats"<<endl;
    }
};
class Mammal : public Animal {
public:
    void bloodType(){
        cout<<"Warm-blooded"<<endl;
    }  
};

class Bird : public Animal {
public:
    void fly(){
        cout<<"fly"<<endl;
    }
};
class Fish : public Animal {
public:
    void swim(){
        cout<<"swim"<<endl;
    }
};

int main(){
    Mammal m1;
    m1.bloodType();
    m1.breath();
    
    Bird b1;
    b1.fly();
    b1.eat();
    
    Fish f1;
    f1.swim();
    f1.eat();
}