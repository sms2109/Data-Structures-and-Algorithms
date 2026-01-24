#include <iostream>
using namespace std;

class Animal{
public:
    void breath(){
        cout << "breathes" << endl;
    }
    void eat(){
        cout<<"eats"<<endl;
    }
};

class Mammal : public Animal{
public:
    void bloodType(){
        cout<<"Warm-blooded"<<endl;
    }
    void heartType(){
        cout<<"Four-chambered heart"<<endl;
    }
};

class Lion : public Mammal{
public:
    void Roar(){
        cout<<"A lion's roar is a powerful, low-pitched vocalization used primarily for communication and territorial defense"<<endl;
    }
};

int main(){
    Lion L1;
    L1.Roar();
    L1.bloodType();
    L1.eat();
}