#include <iostream>
using namespace std;

// void printAllsubStrings(string s){
//     int n = s.length();
//     string ans = "";
//     for(int st=0;st<n;st++){

//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 ans+=s[i];
//                 cout<<ans;
//                 ans = "";
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// using recursion
int printAllsubStrings(string s, int st, int end, int &count)
{

    if (st == s.length())
    {
        return count;
    }
    if (end == s.length())
    {
        return printAllsubStrings(s, st + 1, st + 1, count);
    }

    if (s[st] == s[end])
    {
        // cout<<s.substr(st,end-st+1)<<" ";
        count++;
    }

    return printAllsubStrings(s, st, end + 1, count);
}

long long helper(string s, char c, int st, int end, int &count)
{
    if (st == s.length())
    {
        return count;
    }
    if (end == s.length())
    {
        return helper(s, c, st + 1, st + 1, count);
    }
    if (s[st] == c && s[end] == c)
    {
        count++;
        cout << s.substr(st, end - st + 1)<<" ";
    }
    return helper(s, c, st, end + 1, count);
}
long long countSubstrings(string s, char c)
{
    int count = 0;
    return helper(s, c, 0, 0, count);
}
int main()
{
    string s = "abcab";
    int count = 0;
    // cout << printAllsubStrings(s, 0, 0, count);
    cout<<countSubstrings("zzz",'z');
}