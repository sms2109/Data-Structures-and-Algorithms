#include<iostream>
using namespace std;

int sum(int x,int b){
    x = x+7;
    b = b+3;
    int s = x+b;
    return s;
}

int minoftwo(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}

int sumofN(int n){
    int sum=0;
    int i = 0;

    while(i<=n){
        sum = sum+i;
        i++;
    }
    return sum;
}

//pass by value

void changeX(int x){
    x = x*2;
    cout<<"x = "<<x<<endl;
}
int main(){
    int x=23;   
    int y=67;    //pass by value
    cout<<"sum is : "<<sum(x,y)<<endl;
    changeX(x);
    cout<<"x = " <<x<<endl;
    cout<<"And min no is : "<< minoftwo(10,50)<<endl;
    cout<<"sum of n no is : "<<sumofN(100);
return 0;
}

