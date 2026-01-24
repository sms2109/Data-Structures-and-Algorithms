#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.first > p2.first; //descending-first(val)
}

int fractionalKnapsack(vector<int> value,vector<int> weight,int W){ //O(nlogn)
    int n = value.size();
    vector<pair<double, int>>ratio(n,make_pair(0.0,0));  //pair(ration,idx) -> (double,int)

    for(int i=0;i<n;i++){
        double r = value[i] /(double)weight[i];
        ratio[i] = make_pair(r,i);
    }
    
    sort(ratio.begin(),ratio.end(),compare);

    int ans = 0;
    for(int i=0;i<n;i++){
        int idx = ratio[i].second; 
        if(weight[idx] <= W){
            ans += value[idx];
            W -= weight[idx];
        }else{ //last item
            ans += (ratio[i].first * W);
            W = 0;
            break;
        }
    }

    return ans;
}

int main(){
    vector<int> value = {100,60,120};
    vector<int> weight = {20,10,30};
    int W = 50;
    cout<<"max value : " <<fractionalKnapsack(value,weight,W);
    return 0;
}