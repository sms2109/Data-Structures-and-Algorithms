#include<iostream>
using namespace std;

int reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;

}
    
}

int main(){
    int size=5;
    
    int arr[size]={9,5,7,8,3};
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }

return 0;
}

    

// int main() {

//     int arr[5] = {1, 2, 5, 4, 3};
//     int maxIndex = 0; // Initialize maxIndex to 0
//     int minIndex = 0; 

//     for (int i = 0; i < 5; i++) {
//         if (arr[i] > arr[maxIndex]) {
//             maxIndex = i;
//         }
//     }

//     for (int i = 0; i < 5; i++) {
//         if (arr[i] < arr[minIndex]) {
//             minIndex = i;
//         }
//     }

//     cout << "Index of maximum element: " << maxIndex << endl;
//     cout << "Index of minimum element: " << minIndex << endl;

//     swap(arr[maxIndex], arr[minIndex]);

//     cout << "Array after swapping maximum and minimum elements: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }