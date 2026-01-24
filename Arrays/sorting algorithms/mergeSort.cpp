#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &vec,int n){
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void merge(vector<int> &vec,int si,int mid,int ei){ //O(n)
    vector<int> temp;
    int i = si;
    int j = mid+1;

    while(i <= mid && j <= ei){ 
        if(vec[i] <= vec[j]){
            temp.push_back(vec[i++]);
        }else{
            temp.push_back(vec[j++]);
        }
    }
    
    while(i <= mid){
        temp.push_back(vec[i++]);
    }

    while(j <= ei){
        temp.push_back(vec[j++]);
    }
    
    //temp vector -> org vector
    for(int idx=si, x=0;idx<=ei;idx++){
        vec[idx] = temp[x++];
    }
    // printVector(vec,vec.size());
}

void mergeSort(vector<int> &vec,int si,int ei){  //O(nlogn)
    if(si>=ei){
        // cout<<vec[si]<<endl;
        return;
    }
    // for(int i=si;i<=ei;i++){
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;
    int mid = si + (ei-si)/2;
    mergeSort(vec,si,mid);//left half
    mergeSort(vec,mid+1,ei);//right half

    merge(vec,si,mid,ei); //conquer
}


int main(){
    vector<int> vec = {6,3,7,5,2,4};
    int n = vec.size();
    mergeSort(vec,0,n-1);
    cout<<"Sorted array is: ";
    printVector(vec,n);
    return 0;
}

/*  vector<int> vec → Pass by value → copy is created

vector<int> &vec → Pass by reference → original vector is modified  */