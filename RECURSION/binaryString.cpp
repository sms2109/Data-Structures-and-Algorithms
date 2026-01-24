//print all binary strings of size n without any consecutive 1s;
#include<iostream>
using namespace std;

// void binaryString(int n,int lastPlace,string ans){
//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }
//     if(lastPlace != 1){
//         binaryString(n-1,0,ans+'0');
//         binaryString(n-1,1,ans+'1');
//     }else{
//         binaryString(n-1,0,ans+'0');
//     }
// }

// void binaryString(int n,string ans){
//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }
//     if(ans.empty() || ans[ans.size() - 1] != '1'){
//         binaryString(n-1,ans+'0');
//         binaryString(n-1,ans+'1');
//     }else{
//         binaryString(n-1,ans+'0');
//     }
// }

int binaryString(int n){
    string ans = "";
    if(n==0){
        return ans.length();
    }
    if(ans.empty() || ans[ans.size() - 1] != '1'){
        return binaryString(n-1);
        ans=ans+'0';
        return binaryString(n-1);
        ans=ans+'1';
    }else{
        return binaryString(n-1);
        ans=ans+'0';
    }
}

int main(){
    // binaryString(3,0,"");
    // binaryString(3,"");
    cout<<binaryString(3);
    return 0;
}