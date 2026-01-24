#include<iostream>
using namespace std;  

class Student {
    //properties
    string name;
public:  //public access specifier allows access to these members from outside the class
    float cgpa;
   
    //methods
    void getPercentage(){
        cout<< (cgpa * 10) << "%" << endl;  
    }

    //Setters
    void setName(string nameVal){
        name = nameVal;
    }

    //Getters
    string getName(){
        return name;
    }
};

int main(){
    Student s1; //object creation  //Memory for a class is allocated only when an object is created.
    cout << "Size of string: " << sizeof(string) << " bytes" << endl;   
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of Student class: " << sizeof(s1) << " bytes" << endl;    
    // s1.name = "John";  // Error: 'name' is private within this context
    s1.cgpa = 9.5;  // Accessing public member
    cout << "CGPA: " << s1.cgpa << endl;  // Accessing public member
    s1.getPercentage();  // Calling public method
    s1.setName("John Doe");  // Using setter to set private member
    cout << "Name: " << s1.getName() << endl;  
    return 0;
}


// 💡 sizeof() counts only data members + padding.
// 💡 Methods do not take memory.
// 💡 Padding depends on compiler & system architecture.