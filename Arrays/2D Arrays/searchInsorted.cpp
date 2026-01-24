#include<iostream>
using namespace std;

//brute force approch O(n2)
//search in 2D array    
int searchIn2DArray(int arr[][4],int n,int m,int key){
    for(int i=0;i<n;i++){  //as like linearsearch in 1D array
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<"("<<i<<","<<j<<")";
                return i,j;
            }
        }
    }
    return -1;
}

//row wise and column wise sorted matrix O(nlogm)
int searchIn2DArraySorted(int arr[][4],int n,int m,int key){
    for(int i=0;i<n;i++){
        int low=0,high=3;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[i][mid]==key){
                cout<<"("<<i<<","<<mid<<")";
                return i;
            }
            else if(arr[i][mid]<key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
//best approach
//staircase search O(n+m)
int staircaseSearch(int arr[][4],int n,int m,int key){
    int i=0,j=m-1; //start from top right corner
    while(i<n && j>=0){     
        if(arr[i][j]==key){
            cout<<"("<<i<<","<<j<<")"<<endl;
            return i,j;
        }
        else if(arr[i][j]>key){
            j--; //move left
        }
        else{
            i++; //move down
        }
    }
    return -1;
}

int main(){
    int arr[4][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}
                    };
    
    cout<<"Enter the key to search: "<<endl;;
    int key;
    cin>>key;
    // searchIn2DArray(arr,4,4,key);
    // searchIn2DArraySorted(arr,4,4,key)
    int result = staircaseSearch(arr, 4, 4, key);
    if(result != -1)
        cout << "Search complete: Key exists in the array" << endl;
    else
        cout << "Key not found" << endl;
    return 0;
}