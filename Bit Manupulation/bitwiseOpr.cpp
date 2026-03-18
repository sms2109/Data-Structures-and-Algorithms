#include<iostream>
using namespace std;

int main(){
    // Example of bitwise operators in C++
    int a = 5;      // 0101
    int b = 3;      // 0011

    //AND operator
    cout<<(a & b)<<endl;   // 0001 -> 1

    //OR operator
    cout<<(a | b)<<endl;   // 0111 -> 7

    //XOR operator
    cout<<(a ^ b)<<endl;   // 0110 -> 6

    //NOT operator
    cout<<(~a)<<endl;      // 1010 -> -6 (2's complement)
    cout<<(~0)<<endl;    // 1111...1111 -> -1
    cout<<(~4)<<endl;    // 1111...1011 -> -5

    //Left Shift operator
    cout<<(a << 1)<<endl;  // 1010 -> 10
    cout<<(7 << 2)<<endl;  // 0111 0000 -> 28
    cout<<(26 << 4)<<endl;

    //Right Shift operator
    cout<<(a >> 1)<<endl;  // 0010 -> 2
    cout<<(8 >> 2)<<endl;  // 0010 -> 2

    return 0;
}