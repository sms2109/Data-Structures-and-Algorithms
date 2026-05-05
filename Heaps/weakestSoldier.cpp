#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Row{
public:
    int idx;
    int Scount;
    
    Row(int idx,int Scount){
        this->idx = idx;
        this->Scount = Scount;
    }

    bool operator < (const Row &obj) const{
        if(this->Scount == obj.Scount){
            return this->idx > obj.idx;
        }
        return this->Scount > obj.Scount;
    }
};

void weakestSoldier(vector<vector<int>> matrix,int k){
    vector<Row> rows;
    for(int i=0;i<matrix.size();i++){
        int Scount = 0;
        for(int j=0;j<matrix[i].size() && matrix[i][j] == 1;j++){
            Scount++;
        } 
        rows.push_back(Row(i,Scount));
    }

    priority_queue<Row> pq(rows.begin(),rows.end());
    for(int i=0;i<k;i++){
        cout<<"Row : "<<pq.top().idx<<endl;
        pq.pop();
    }
}

int main(){
    vector<vector<int>> matrix = {{1,0,0,0},
                                  {1,1,1,1},
                                  {1,0,0,0},
                                  {1,0,0,0}
                                };
    int k = 2;
    weakestSoldier(matrix,k);
    return 0;
}