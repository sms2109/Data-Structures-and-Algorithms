#include<iostream>
using namespace std;

class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollno;
    float cgpa;
};  

class TA : public Teacher, public Student {
public:
    string name;
};

int main(){
    TA ta1;
    ta1.name = "karan";
    ta1.salary = 50000;
    ta1.subject = "DSA";
    ta1.rollno = 101;
    ta1.cgpa = 9.1;

    cout << "Name: " << ta1.name << endl;
    cout << "Salary: " << ta1.salary << endl;   
    cout << "Subject: " << ta1.subject <<  endl;
    cout << "Roll No: " << ta1.rollno << endl;
    cout << "CGPA: " << ta1.cgpa << endl;

    return 0;
}