#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    // remove non-alphabates
    int n = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            ans += ch;
        }
    }

    s = ans;
    cout << "String after removing non-alphabates: " << s << endl;

    int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
}

//using inbuilt function
bool isPalindrome2(string s){
    int n = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int i=0,j=n-1;
    while(i<=j){
        if(!isalnum(s[i])){
            i++;
        }
        else if(!isalnum(s[j])){
            j--;
        }
        else if(s[i]!=s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string s = "0P";
    string s2 = "A man, a plan, a canal: Panama";
    bool result = isPalindrome(s);
    if(result){
        cout<<"The string is a palindrome."<<endl;
    }
    else{
        cout<<"The string is not a palindrome."<<endl;
    }
    return 0;
}