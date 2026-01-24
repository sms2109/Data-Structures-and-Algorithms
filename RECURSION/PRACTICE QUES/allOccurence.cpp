/*Question 2 : For a given integer array of size N. You have to find all the occurrences
(indices) of a given element (Key) and print them.
Use a recursive function to solve this problem.
Sample Input : arr[ ] = {3, 2, 4, 5, 6, 2, 7, 2, 2}, key = 2
Sample Output : 1 5 7 8 */

#include<iostream>
using namespace std;

void allOccurence(int arr[],int n,int key,int idx){
    if(idx==n){
        return;
    }
    if(arr[idx]==key){
        cout<<idx<<" ";
    }
    return allOccurence(arr,n,key,idx+1);
}

int main(){
    int arr[] = {3,2,4,2,6,2,7,2,2};
    int n = sizeof(arr)/sizeof(int);
    int key = 2;
    allOccurence(arr,n,key,0);
}