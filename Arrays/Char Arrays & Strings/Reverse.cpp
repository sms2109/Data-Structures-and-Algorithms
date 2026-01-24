#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char fruit[10] = "Bnana";
    int n = strlen(fruit);
    int st = 0,end=n-1;
    while(st<end){
        swap(fruit[st++],fruit[end--]);
    }
    cout<<fruit;
}