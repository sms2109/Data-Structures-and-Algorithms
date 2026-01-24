#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    
    //2d array input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    //2d array output
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<(arr[i][j])<<",";
        }
        cout<<endl;
    }
    //in memory , 2d arrays represented as a contiguos block of memory cells(linearlly)
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int *ptr = &(arr[i][j]);
            cout<<ptr<<", ";
        }
        cout<<endl;
    }
    return 0;
}