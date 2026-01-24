#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    // str1 = "Hello"; // Error: array type 'char [100]' is not assignable
    strcpy(str1, "Hello"); // Correct way to assign a string to a char array
    //or
    char str2[50];
    char str3[] = " karan solanki";
    char str4[] = "hii";
    char str5[] = "_rohan";
    strcpy(str2, str3); // copies str3 into str2
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout<<str4<<endl;
    strcat(str4, str5); // concatenates str5 to str4
    cout << "After concatenation: " << str4 << endl;
    // Comparing strings
    char str6[] = "mango";
    // char str7[] = "abc";
    char str7[] = "orange";
    cout<<strcmp(str6, str7)<<endl; // 0 if both are equal , else difference of ascii values of first unmatched character
    return 0;
}