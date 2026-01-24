#include<iostream>
#include<vector>
using namespace std;    

void printVector(const vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec = {1,2,3,4,5};
    cout<<"size: "<<vec.size()<<endl; // size of vector
    cout<<"capacity: "<<vec.capacity()<<endl; // capacity of vector
    printVector(vec);
    vec.push_back(6);       // adding element at the end
    cout<<"after push_back"<<endl;
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    printVector(vec);
    vec.pop_back();         // removing last element
    cout<<"after pop_back"<<endl;
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    printVector(vec);
    return 0;
}