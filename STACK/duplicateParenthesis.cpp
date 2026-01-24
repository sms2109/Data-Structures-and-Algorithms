#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isDuplicate(string str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch != ')'){//non-closing:opening or expressions
            s.push(ch);
        }else{//closing
            if(s.top() == '('){
                return true; //duplicate
            }

            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }

    return false;
}

int main(){
    string str1 = "((a+b))"; //Invalid : true
    string str2 = "((a+b)+(c+d))"; //valid : false

    cout<<isDuplicate(str1)<<endl; //1
    cout<<isDuplicate(str2)<<endl; //0

    return 0;
}