#include<iostream>
using namespace std;



int diagonalSum(int arr[][3],int n){
    int sum = 0;
    for(int i=0;i<n;i++){//rows    //O(n2)
    //   for(int j=0;j<n;j++){//cols
    //     if(i==j){
    //         sum+=arr[i][j];
    //     }else if(j==n-i-1){
    //         sum+=arr[i][j];
    //     }
    //   }
        sum+=arr[i][i];   //O(n)
        int j=n-i-1;  //pd
        if(i != j){
            sum+=arr[i][j]; //sd
        }
    }
    cout<<"sum = "<<sum<<endl;
    return sum;
}
int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}
                    };
    int arr2[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}
                    };
    // diagonalSum(arr,4);
    diagonalSum(arr2,3);
}