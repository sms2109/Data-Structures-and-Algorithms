#include<iostream>
using namespace std;

// void fibonacci(int n) { //O(n) time complexity //best approch
//     int arr[n];
//     arr[0] = 0;
//     arr[1] = 1;
//     for(int i = 2; i < n; i++) {
//         arr[i] = arr[i-1] + arr[i-2];
//     }
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

int fibonacci(int n) {  //O(2^n) time complexity //worst approch
    if (n == 0 || n == 1){
        return n;        // base case
    }
        
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    //print fibonacci series up to nth term
    int n = 10;
    for(int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    //print nth fibonacci number
    cout<<endl<<fibonacci(3);
    return 0;
}