#include<iostream>
#include<vector>
using namespace std;

bool isSorted(int arr[],int n,int i){
    if(i == n-1){
        return true;
    }
     
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1);
}

int firstOccurance(vector<int> vec,int target,int i){
    int n = vec.size();

    if(i==n){
        return -1;
    }

    if(vec[i] == target){
        return i;
    }
    return firstOccurance(vec,target,i+1);
}

int lastOccurance(vector<int> vec,int target,int i){
    

    if(i==-1){
        return -1;
    }
     
    if(vec[i]==target){
        return i;
    }
    return lastOccurance(vec,target,i-1);
}

int allOccurance(vector<int> vec,int target,int i){
    int n = vec.size();

    if(i==n){
        return -1;
    }

    if(vec[i] == target){
        cout<<i;
    }
    return firstOccurance(vec,target,i+1);
}

int xpown(int x,int n){
    if(n==0){
        return 1;
    }

    int halfpow = xpown(x,n/2);
    int halfpowsqaure = halfpow * halfpow;
    if(n%2 != 0){
        return x * halfpowsqaure;
    }
    return halfpowsqaure;
}

void removeDuplicates(string str,string ans,int i,int map[26]){
    if(i==str.length()){
        cout<<ans<<endl;
        return;
    }
    //kam
    int index =  int(str[i] - 'a');
    if(map[index]){
        removeDuplicates(str,ans,i+1,map);
    }else{
        map[index] = true;
        removeDuplicates(str,ans+str[i],i+1,map);
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,3,4,2,5};
    vector<int> vec = {1,2,3,3,3,2,2,4};
    cout<<isSorted(arr,5,0)<<endl;
    cout<<isSorted(arr2,5,0)<<endl;
    cout<<firstOccurance(vec,4,0)<<endl;
    int n = vec.size();
    cout<<lastOccurance(vec,2,n-1);
    cout<<endl;
    cout<<xpown(2,5);
    cout<<endl;
    int map[26] = {false};
    removeDuplicates("sheshkaran","",0,map);
    cout<<endl;
    cout<<~(0)<<endl;
    return 0;
}