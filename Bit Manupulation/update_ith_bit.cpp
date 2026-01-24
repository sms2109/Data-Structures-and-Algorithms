#include<iostream>
using namespace std;

void updateIthbit(int num, int i,int val){
    num = num & (~(1<<i)); //clear ith bit
    num = num | (val << i);
    cout<<num;
}

int main(){
    int num = 7 , i = 3 , val = 1;
    updateIthbit(num,i,val);
}