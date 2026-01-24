#include<iostream>
using namespace std;    

class Example {
public:
    Example() {
        cout << "Constructor..." << endl;
    }
    ~Example() {
        cout << "Destructor..." << endl;
    }
};

int main(){
    int a = 0;
    if(a == 0){
        static Example eg1; // static object, created only once and destroyed at program end
    }
    cout<<"code ending..."<<endl;
    return 0;
}