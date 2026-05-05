#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

bool isValidAnagram(string s,string t){
    unordered_map<char,int> m;
    int n = s.length();
    int len = t.length();
    if(n!=len){
        return false;
    }
    for(int i=0;i<n;i++){
        if(m.count(s[i])){
            m[s[i]]++;
        }else{
            m[s[i]] = 1;
        }
    }
    for(int i=0;i<n;i++){
        if(m.count(t[i])){
            m[t[i]]--;
            if(m[t[i]] == 0){
                m.erase(t[i]);
            }
        }else{
            return false;
        }  
    }
    return m.size() == 0;
}

int main(){
   string s = "race";
   string t = "care";

   cout<<isValidAnagram(s,t);
}