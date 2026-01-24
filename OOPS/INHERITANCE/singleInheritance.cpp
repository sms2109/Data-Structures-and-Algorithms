#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    string color;

    void breath(){
        cout<<"breath"<<endl;
    }
    void eat(){
        cout<<"eat"<<endl;
    }
};

// for public inheritance
// class Fish : public Animal {
// public:
//     int fins;

//     void swim(){
//         cout<<"swim"<<endl;
//     }
// };

//for protected inheritance
class Fish : protected Animal {
public:
    int fins;
    //eat();
    void swim(){
        eat();
        cout<<"swim"<<endl;
    }
};

int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    // f1.eat(); //not possible in protected inheritance
    // f1.breath();
}