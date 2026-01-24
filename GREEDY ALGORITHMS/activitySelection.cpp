#include<iostream>
#include<vector>
using namespace std;

int maxActivities(vector<int> start,vector<int> end){
    //sort on end time
    //select A0
    cout<<"A0"<<endl;
    int count = 1;
    int currEndtime = end[0];

    for(int i=1;i<start.size();i++){
        if(currEndtime <= start[i]){  //non-overlapping
            count++;
            cout<<"A"<<i<<endl;
            currEndtime = end[i];
        }
    }

    return count;
}

int main(){
    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};

    cout<<maxActivities(start,end);
    return 0;
}
