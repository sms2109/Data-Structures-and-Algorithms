#include<iostream>
#include<stack>
using namespace std;

string reverseString(string str){  //O(n) 
    string ans;
    stack<char> s;

    int i=0;
    while(i<str.size()){
        s.push(str[i++]);
    }

    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }

    return ans;
}

int main(){
    string str = "sheshkaran";
    cout<<reverseString(str);
    return 0;
}