#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch = 'D';
    cout<<int(ch);
    int position = 'E' - 'A' + 1;
    cout<<"\nPosition of E in alphabet: "<<position<<endl;

    //char array
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout<<arr; //not print address as like in case of int array

    char work[] = "code";
    cout<<"\n"<<strlen(work); //4 {'c','o','d','e','\0'}
    cout<<"\n"<<sizeof(work); //5 (including null character)

    //inpur char array
    char name[20];
    cout<<"\nEnter your name: ";    
    cin>>name; //input stops at space(ignore white space)
    cout<<"Your name is: "<<name<<endl;

    //to take input with spaces
    char sentence[50];
    cout<<"Enter a sentence: ";
    cin.getline(sentence, 50 , '*');
    cout<<"You entered: "<<sentence<<endl;
    cout<<"Length of sentence: "<<strlen(sentence)<<endl;
    return 0;
}