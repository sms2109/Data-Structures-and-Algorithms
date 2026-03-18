#include <iostream>
#include<vector>
using namespace std;


int main()
{
    int arr[5] = {2,3,1,3,2};
    int i=0 , j = 4;
    while(i<j){
        if(arr[i] == arr[j]){
            cout<<arr[i];
        }
        i++; j--;
    }
    return 0;
}