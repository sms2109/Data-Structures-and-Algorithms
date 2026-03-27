#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//rangeQuery
void RangeQuery(int arr[],int n){
    int prefix[n+1];
    prefix[0] = 0;
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1] + arr[i-1];
    }

    int q,l,r,ans = 0;
    cout<<"total query/testcase : ";
    cin>>q;
    
    while(q--){
        cout<<"enter range l to r : ";
        cin>>l>>r;
        ans = prefix[r] - prefix[l-1];
        
        cout<<"sum in range "<<l<<" to "<<r<<" is : "<<ans<<endl;
    }
    
}

int main(){
    int arr[] = {2,1,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    PrintArr(arr,n);
    RangeQuery(arr,n+1);
    return 0;
}