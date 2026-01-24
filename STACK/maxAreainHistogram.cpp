#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int MaxAreainHistogram(vector<int> heights){ //O(n)
    stack<int> s;
    int n = heights.size();
    vector<int> nsl(n);
    vector<int> nsr(n);
    

    //next smaller left
    nsl[0] = -1;
    s.push(0);
    for(int i=1;i<n;i++){
        int curr = heights[i];

        while(!s.empty() && curr <= heights[s.top()]){
            s.pop();
        }

        if(s.empty()){
            nsl[i] = -1;
        }else{
            nsl[i] = s.top();
        }
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    //nextSmallerRight 
    nsr[n-1] = n;
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        int curr = heights[i];
        while(!s.empty() && curr <= heights[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsr[i] = n;
        }else{
            nsr[i] = s.top();
        }
        s.push(i);
    }

    int maxArea = 0;
    for(int i=0;i<n;i++){
        int l = heights[i];
        int b = (nsr[i]-nsl[i]-1);
        int Area =  l * b;
        maxArea = max(maxArea,Area);
    }
    return maxArea;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};
    cout<<MaxAreainHistogram(heights);
    return 0;
}

