#include<iostream>
using namespace std;

void printSubarr(int arr[],int n){
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            // cout<<"(" << st <<","<<end<<")";
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}


//Brute force approch //O(n^3)
void subArrSum(int arr[],int n){
    int maxSum = INT_MIN;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int currSum = 0;
            for(int i=st;i<=end;i++){
                currSum += arr[i];
                maxSum = max(maxSum,currSum);
            }
        }
    }
    cout<<"Maximum subarray sum: "<<maxSum<<endl;
}

//optimal approch //O(n^2)
void subArrSum2(int arr[],int n){
    int maxSum = INT_MIN;
    for(int st=0;st<n;st++){
        int currSum = 0;
        for(int end=st;end<n;end++){
            currSum += arr[end];
            maxSum = max(maxSum,currSum);
        }
    }
    cout<<"Maximum subarray sum: "<<maxSum<<endl;
}

//kedanes algorithm //O(n)
void kadane(int arr[], int n) {
    int maxSum = INT_MIN, currSum = 0;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout << "Maximum subarray sum (Kadane's): " << maxSum << endl;
}

int main(){
    int n=5;
    int arr[n]={2,3,4,5,6};
    printSubarr(arr,n);
    // subArrSum(arr,n);
    // subArrSum2(arr,n);
    kadane(arr,n);
    return 0;
}