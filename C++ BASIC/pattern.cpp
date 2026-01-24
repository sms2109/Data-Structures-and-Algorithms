#include<iostream>
using namespace std;

int main(){
int n=5;
int num=1;
char ch='A';
 
// prints square pattern of no 
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}

cout<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}

cout<<endl;

//prints triangles pattern

for(int i=0;i<n;i++){
    for(int j=i+1;j>0;j--){
        cout<<j<<" ";
       
    }
    
    cout<<endl;
}

cout<<endl;
// inverted triagle

for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }

    for(int j=0;j<n-i;j++){
        cout<<num;
    }
    num++;
    cout<<endl;
}


for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

cout<<endl;

// piramid pattern

for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int j=1;j<=i+1;j++){
        cout<<j;
    }
    for(int j=i;j>0;j--){
        cout<<j;
    }
    cout<<endl;
}

cout<<endl;
// Hollow star pattern

for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<"*";
    if(i!=0){
    for(int j=0;j<=2*i-1;j++){
        cout<<" ";
    }
    
        cout<<"*";
    }
    cout<<endl;
    }

    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";

        if(i!=n-2){
        for(int j=0;j<2*(n-i)-5;j++){
            cout<<" ";
        }
        
            cout<<"*";
        }
        cout<<endl;
    }

cout<<endl;
// Butterfly pattern

// Top
for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    if(i!=n-1){
    for(int j=0;j<n-i-1;j++){
           cout<<" ";
    }    
    for(int j=0;j<n-i-1;j++){
           cout<<" ";
    } 
    }  
    for(int j=0;j<i+1;j++){
        cout<<"*";
    } 
    cout<<endl;
}
// bottom
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    if(i!=0){
    for(int j=0;j<i;j++){
           cout<<" ";
    }    
    for(int j=0;j<i;j++){
           cout<<" ";
    }
    }      
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}