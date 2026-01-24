#include<iostream>
using namespace std;

class LivingBeing {
public:
    void grow(){
        cout<<"grows"<<endl;
    }
};
//single inheritance
class Animal : public LivingBeing {
public:
    void breath(){
        cout << "breathes" << endl;
    }
    void eat(){
        cout<<"eats"<<endl;
    }
};
//multilevel inheritance
class Mammal : public Animal {
public:
    void bloodType(){
        cout<<"Warm-blooded"<<endl;
    }  
};
//hierarchical inheritance
class Bird : public Animal {
public:
    void fly(){
        cout<<"fly"<<endl;
    }
};

int main(){
    Mammal m1;
    m1.bloodType();
    m1.breath();
    m1.grow();
    
    Bird b1;
    b1.fly();
    b1.eat();
    b1.grow();

    return 0;
}