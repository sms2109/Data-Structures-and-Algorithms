#include<iostream>
#include<vector>
using namespace std;


// int firstOccurence(vector<int> v,int ele){
//     for(int i=0;i<v.size();i++){
//         if(v[i]==ele){
//             return i;
//         }
//     }
//     return -1;
// }

int firstOccurence(vector<int> v,int ele,int i){
    if(i==v.size()){
        return -1;
    }
    if(v[i]==ele){
        return i;
    }
    return firstOccurence(v,ele,i+1);
}
//O(n2) not efficient
// int secondOccurence(vector<int> v,int ele){
//     for(int i=0;i<v.size();i++){
//         if(v[i]==ele){
//             for(int j=i+1;j<v.size();j++){
//                 if(v[j]==ele){
//                     return j;
//                 }
//             }
//         }
//     }
//     return -1;
// }

//O(n)
int secondOccurence(vector<int> v,int ele){
    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==ele){
            count++;
            if(count==2){
                return i;
            }
        }
    }
    return -1;
}

//for(int x : v)
// int → data type of element

// x → variable that stores one element at a time

// v → vector (container)

// : → means “from”

int main(){
    vector<int> vec = {1,2,3,4,3,5,4,9,5};
    int element = 4;
    cout<<"first occurence of " << element <<" is at index : " <<firstOccurence(vec,element,0)<<endl;
    cout<<"first occurence of " << element <<" is at index : " <<secondOccurence(vec,element)<<endl;
}