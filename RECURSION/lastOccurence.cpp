#include<iostream>
#include<vector>
using namespace std;

//reverse scan
// int lastOccurence(vector<int> v,int ele){
//     for(int i=v.size()-1;i>=0;i--){
//         if(v[i]==ele){
//             return i;
//         }
//     }
//     return -1;
// }

//forward scan
// int lastOccurence(vector<int> v,int ele){
//     int index = -1;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==ele){
//             index = i;
//         }
//     }
//     return index;
// }

//using recursion
// int lastOccurence(vector<int>v,int ele,int idx){
//     if(idx<0){
//         return -1;
//     }
//     if(v[idx]==ele){
//         return idx;
//     }
//     return lastOccurence(v,ele,idx-1);
// }

int lastOccurence(vector<int> v,int ele,int i){
    if(i == v.size()){
        return -1;
    }
    int idxFound = lastOccurence(v,ele,i+1);
    if(idxFound == -1 && v[i]==ele){
        return i;
    }
    return idxFound;
}

int main(){
    vector<int> vec = {1,2,3,4,3,5,4,9,3};
    int element = 4;
    // cout<<"last occurence of " << element <<" is at index : " <<lastOccurence(vec,element,vec.size()-1)<<endl;
    cout<<"last occurence of " << element <<" is at index : " <<lastOccurence(vec,element,0)<<endl;
}