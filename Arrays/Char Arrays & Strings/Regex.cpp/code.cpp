#include<iostream>
#include<string>
#include<regex>
using namespace std;

//match full string
void match_string(string str){
    regex pattern("[a-z]+[0-9]+");
    if(regex_match(str,pattern)){
        cout<<"Match found";
    }else{
        cout<<"Match not found";
    }
}

//search inside string
void search_string(){
    string str = "My numbers is 966490870";
    regex pattern("[0-9]+");

    smatch match;

    if(regex_search(str,match,pattern)){
        cout<<"Found : "<<match[0];
    }
}

//smatch match
void smatch_match(){
    string str = "Date: 05-04-2026";

    // 3 groups: day, month, year
    regex pattern("(\\d{2})-(\\d{2})-(\\d{4})");

    smatch match;

    if (regex_search(str, match, pattern)) {
        cout << "Full match: " << match[0] << endl;
        cout << "Day: " << match[1] << endl;
        cout << "Month: " << match[2] << endl;
        cout << "Year: " << match[3] << endl;
    }
}

//replace
void replace(){
    string str = "I love cats";
    regex pattern("cats");

    string result = regex_replace(str, pattern, "dogs");
    cout << result;
}


int main(){
    string str = "abc123";
    match_string(str);
    cout<<endl;
    search_string();
    cout<<endl;
    smatch_match();
    cout<<endl;
    replace();
}