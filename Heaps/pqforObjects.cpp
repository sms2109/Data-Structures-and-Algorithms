#include<iostream>
#include<queue> 
using namespace std;

class Student{   //"<" opr overload
    public:
    string name;
    int marks;

    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const Student &obj) const {
        return this->marks < obj.marks; //max heap //for min heap inside of loop use >
    }
};

int main(){
    priority_queue<Student> pq;

    pq.push(Student("aman",85));
    pq.push(Student("bhumika",95));
    pq.push(Student("chetan",65));

    while(!pq.empty()){
        cout<<"top : "<<pq.top().name<<", "<<pq.top().marks<<endl;
        pq.pop();
    }
}