#include<iostream>
using namespace std;

void func(int arr[][4],int n,int m){
   cout<<"0st row ptr : "<<arr<<endl;
   cout<<"1st row ptr : "<<arr+1<<endl;
   cout<<"2nd row ptr : "<<arr+2<<endl; 

   cout<<"0th row values : "<<*(arr)<<endl; 
   cout<<"1st row values : "<<*(arr+1)<<endl; 
   cout<<"2nd row values : "<<*(arr+2)<<endl; 

   cout<<arr[2][3]<<"="<<*(*(arr+2)+3)<<endl;
}
void func2(int (*arr)[4],int n,int m){
    
}
int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}
                    };

    cout<<arr<<" = "<<&(arr[0][0])<<endl;
    cout<<arr+1<<" = "<<&(arr[1][0])<<endl;
    cout<<(arr+1)-(arr)<<endl;
    cout<<"in func : "<<endl;
    func(arr,4,4);
    return 0;
}