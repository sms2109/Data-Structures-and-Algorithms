#include<iostream>  
#include<cstring>
using namespace std;

int main(){
    char str1[20] = "Hello";
    char str2[] = "World";

    // str1 = str2; //error: array type 'char [20]' is not assignable
    strcpy(str1, str2); //copy str2 to str1
    cout<<"str1: "<<str1<<endl;
    return 0;
}