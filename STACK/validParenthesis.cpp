#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string str){
    stack<char> s;

    for(int i=0;i<str.size();i++){ //O(n)
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){ //opening brackets
            s.push(ch);
        }else{//closing brackets
            if(s.empty()){
                return false;
            }
            //match
            int top = s.top();
            if((top == '(' && ch == ')') || 
               (top == '[' && ch == ']') ||
               (top == '{' && ch == '}')
            ){
               s.pop();
            }else{
                return false;
            }
        }
    }

    return s.empty();
}

int main(){
    string str1 = "{[()]}"; //valid
    string str2 = "[{(]";  //invalid
    string str3 = "(())))))"; //invalid
    string str4 = "}}))]"; //invalid

    cout<<isValid(str1)<<endl;
    cout<<isValid(str2)<<endl;
    cout<<isValid(str3)<<endl;
    cout<<isValid(str4)<<endl;

    return 0;
}