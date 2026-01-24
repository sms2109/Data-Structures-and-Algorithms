#include<iostream>
using namespace std;

void permutation(string str,string ans){
    int n = str.size();
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        //"abcdefgh" , i = 2, "ab"+"defgh" => str.substr(0,i)+str.substr(i+1,n-i-1);
        string nextStr = str.substr(0,i)+str.substr(i+1,n);
        permutation(nextStr,ans+ch); //ith char choice to add i permutation
    }
}

int main(){
    string str = "abc";
    string ans = "";
    permutation(str,ans);
    return 0; 
}

/*str.substr(start_index, length)
start_index (st) → index from where substring starts

length → how many characters you want */