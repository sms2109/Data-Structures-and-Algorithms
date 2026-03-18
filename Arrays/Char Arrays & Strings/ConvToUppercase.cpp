#include<bits/stdc++.h>
using namespace std;

//using inbuilt function
void toUpperCase(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] =  toupper(str[i]);  //toupper() works only on a single character, not on an entire string or array.
        }
    }
    cout<<"from inbuilt function : "<<str<<endl;
}

//using transform function
void usingTransform(char str[]){
    int n = strlen(str);
    transform(str,str+n,str,::toupper);
    cout<<"from usingTrasform function : "<<str<<endl;
}

//using position of char in alphabates
void convertToUppercase(char word[]){
    int n = strlen(word);
    for(int i=0;i<n;i++){
        if(int(word[i])>=97 && int(word[i])<=122){
            int pos = word[i] - 'a';
            word[i] = 'A' + pos;
        }
    }
    cout<<"from positions function : "<<word<<endl;
}

int main(){
    char word[] = "ApPle";
    
    toUpperCase(word);
    usingTransform(word);
    convertToUppercase(word);
    return 0;
}