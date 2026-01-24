#include<iostream>
#include<cstring>
using namespace std;


int main(){
    char word[] = "ApPle";
    int n = strlen(word);
    for(int i=0;i<n;i++){
        if(int(word[i])>=97 && int(word[i])<=122){
            int pos = word[i] - 'a';
            word[i] = 'A' + pos;
        }
        cout<<word[i];
    }
    
    return 0;
}