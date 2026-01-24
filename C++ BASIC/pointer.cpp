#include<iostream>
using namespace std;

int main(){
    int a=10;
    float b=0.5;
    int *ptr = &a;
    float * ptr2 = &b;
    int **pptr= &ptr;
    cout<<ptr << "=" << &a <<endl;
    // cout << *(int*)0x61ff00<<endl;   // Cast integer to int pointer   , 0x61ff00 make sure this no should address of that variable
    cout << *(&a) <<endl;
    cout<<*ptr<<endl;  //dereference operator
    *ptr = 20;
    cout<<a<<endl;
    // cout << sizeof(a) << sizeof(b) << sizeof(ptr) << sizeof(ptr2) <<sizeof(pptr);
    
    cout<<&ptr<<"="<<pptr<<endl;

    //null operator
    int *ptr3;
    cout<<ptr3<<endl; //garbage value
    int *ptr4 = NULL;
    cout<<ptr4<<endl;
    // cout<<*ptr4; //segamntation fault
    return 0;
}