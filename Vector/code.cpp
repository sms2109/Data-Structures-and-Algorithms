#include<iostream>
using namespace std;

int* funcInt(){
    int *ptr = new int;
    *ptr = 10;
    cout<<"ptr points to "<<*ptr<<endl;
    return ptr;// returning pointer to dynamically allocated memory
}

// void func(){
//     int arr[5] = {1,2,3,4,5}; // static memory allocation
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }   
//     return;
// }
//after the function ends, arr will be destroyed and memory will be freed in stack.

int main(){
    //2
    // func();
    // cout<<arr[0]; // error: 'arr' was not declared in this scope
      
    //3
    int *p = funcInt();
    cout<<"p points to "<<*p<<endl;
    
    //1
    // int size;
    // cin>>size;
    // int* arr = new int[size]; // dynamic memory allocation by new keyword
    // int x = 1;
    // for(int i=0;i<size;i++){
    //     arr[i] = x;
    //     cout<<arr[i]<<" ";
    //     x++;
    // }
    // cout<<endl;
    // delete[] arr;    //  frees memory — very important!
    return 0;
}