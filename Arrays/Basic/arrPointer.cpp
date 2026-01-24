#include<iostream>
using namespace std;
 
void printArray(int arr[],int n){  //int arr[] or *ptr
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<",";
    }
}
int main(){
    // int a = 10;
    // int *ptr = &a;

    // int b = 30;
    // ptr = &b;
    // cout<<*(ptr);

    // int arr[4];
    // cout<<arr;
    // int y= 25;
    // arr = &y;  //not possible -> array pointer acts like a constant pointer

    //pointer airthmatic

    int a = 10;
    int *ptr = &a;
    // cout<<ptr<<endl;
    // ptr++; //1 int ++
    // cout<<ptr<<endl;
    // ptr--;
    // cout<<ptr<<endl;

    int b = 20;
    int *ptr2 = &b;
     
    cout<<ptr2<<endl;
    ptr2 = ptr2 + 3; //3*4=12 bytes
    cout<<ptr2<<endl;
    cout<<ptr2 - 3<<endl;

    int arr[] = {1,2,3,5,7};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr,n);

    //addition and substraction of pointers
    int d = 20;
    int *ptrB = &d;
    int *ptrC = ptrB + 3;
    cout<<endl;
    cout<<(ptrC > ptrB)<<endl; //1
    cout<<ptrC<<endl;
    cout<<ptrB<<endl;
    cout<<ptrC - ptrB<<endl; //3
    return 0;
}