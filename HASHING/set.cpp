#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;

//unordered set internally uses hash table , so its tc:O(1) in avg case and O(n) in worst case
//set internally uses red-black tree(balances tree) , so its time complexity is O(logn)
int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    // s.insert(1);

    cout<<s.size()<<endl;

    for(auto it = s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }

    
    cout<<endl;
    if(s.find(3) != s.end()){
        cout<<"3 exists\n";
    }else{
        cout<<"3 doesn't exists\n";
    }

    s.erase(2);
    for(auto x : s){
        cout<<x<<" ";
    }

    cout<<"\n---------set--------------\n";
    set<int> s1;
    s1.insert(3);
    s1.insert(5);
    s1.insert(2);
    s1.insert(8);
    s1.insert(1);
    // s1.insert(1);
   
    cout<<s1.size()<<endl;
    for(auto x : s1){
        cout<<x<<" ";
    }
    cout<<endl;
    if(s1.find(3) != s1.end()){
        cout<<"3 exits\n";
    }else{
        cout<<"3 doesn't exits\n";
    }
    return 0;
}

