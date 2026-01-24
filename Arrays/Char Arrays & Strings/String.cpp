#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1 = "hello";
    cout<<str1<<endl;
    str1 = "yellow";
    cout<<str1<<endl;
    string str2;
    getline(cin, str2 , '*'); // to take input with spaces until '*' is encountered
    cout<<str2<<endl;
    cout<<str2[1]<<endl; // accessing character at index 1
    // for(int i = 0; i < str2.length(); i++) {
    //     cout<<str2[i]<<",";
    // }
    //for each loop
    for(char ch : str2) {
        cout<<ch<<".";
    }

    //member functions of string
    cout<<endl;
    cout<<"Length of str2: "<<str2.length()<<endl;
    str1.append(" blue"); // appending string
    cout<<"After appending: "<<str1<<endl;
    cout<<str1.at(0)<<endl;
    cout<<str1.substr(3,3)<<endl; // substring from index 0 of length 3
    cout<<str1.find("lo")<<endl; // returns starting index of first occurrence of substring
    string strA = "cat";
    string strB = "dog";
    cout<<(strA < strB)<<endl;
    return 0;
}