#include<iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(str[st]!=str[end]){
            cout<<"Not a Palindrome";
            return false;
        }
        st++;
        end--;
    }
    cout<<"Palindrome";
    return true;
}
    
int main(){
    char word[10] = "racecar";
    int n = strlen(word);
    isPalindrome(word, n);
}