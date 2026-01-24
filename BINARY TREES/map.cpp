#include<iostream>
#include<cstring>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[101] = "ram";
    m[110] = "shyam";
    m[131] = "ram";

    cout<<m[110]<<endl;

    cout<< m.count(111)<<endl;

    for(auto it : m){
        cout<<"key = "<<it.first<<" , "<<"value = "<<it.second<<endl;
    }

    return 0;
}

