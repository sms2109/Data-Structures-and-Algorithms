#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;
    // Dynamic memory allocation of 2D array
    int* *arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    int x=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j] = x++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }

    //Memory Deallocation
    for(int i = 0; i < row; i++){
        delete[] arr[i];  // deleting each row
    }
    delete[] arr;         // deleting pointer array
    return 0;
}