#include <iostream>
using namespace std;

void showbits(int n){   // just show binary but it is decimal , for large no it give overflow error
    int pow = 1;
    int ans = 0;
    while(n>0){
        int rem = n % 2;
        n = n / 2;
        ans = ans + pow*rem;
        pow = pow * 10;
    }
    cout<<ans;
}

//ensting of storing bit in no we can directly print one by one using recursion
void showbitsUsingRec(int n){
    if(n==0) return;
    showbitsUsingRec(n/2);
    cout<<n%2;
}

//optimized approach
void usingBitManuplation(int n){
    for(int bit_no = 7;bit_no >= 0 ;bit_no--){
        if(n & (1<<bit_no)){  //or use (n >> i) & 1; //take &1 with last bit to get last bit
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
}

//or use (n >> i) & 1; //take &1 with last bit to get last bit  //best approach for large no and it is also optimized as we are not using any extra space to store bits and we are directly printing bits one by one
//or we can use cout<<((bitno << 1) & n) >> bitno; // this will give 1 or 0

int main(){
    int n = 10;  // give overflow error on no = 1024 or no that bits size > 2 billion
    showbits(n);
    cout<<endl;
    showbitsUsingRec(n);
    cout<<endl;
    usingBitManuplation(n);
}