#include<stdio.h>
int binarysearch(int arr[],int size,int x){
    int start = 0;
    int end = size;
    
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}


int main(){

    int size;
    printf("\nenter size :");
    scanf("%d",&size);

    int arr[size];
    printf("\nenter element in sorted : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int x;
    printf("\nenter x : ");
    scanf("%d",&x);

    int result=binarysearch(arr,size,x);
    if(result!=-1){
        printf("\nelement found at index %d",result);
    }else{
        printf("\nelement not found");
    }
     
    return 0;

}