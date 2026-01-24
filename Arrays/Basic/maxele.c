#include<stdio.h>

int getmax(int arr[],int n){
    int maxelement = arr[0];
    for(int i=0;i<n;i++){
        
        if(arr[i]>maxelement){
            maxelement=arr[i];
            
        }
        
    }
    return maxelement;
}
int main(){
    int n;
    printf("no of array elements : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int result=getmax(arr,n);
    printf("max element is : %d",result);


    return 0;
}