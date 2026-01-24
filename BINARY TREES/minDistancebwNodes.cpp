#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public: 
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

Node* buildTree(vector<int> nodes,int &idx){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes,idx);
    currNode->right = buildTree(nodes,idx);

    return currNode;
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();

        if(curr == NULL){
            cout<<endl;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        }else{
            cout<<curr->data<<" ";
            if(curr->left != NULL){
                Q.push(curr->left);
            }
            if(curr->right != NULL){
                Q.push(curr->right);
            }
        }
    }
}

bool rootToNodePath(Node* root,int n,vector<int> &path){  //O(n)
    if(root == NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data == n){
        return true;
    }

    bool isLeft = rootToNodePath(root->left,n,path);
    bool isRight = rootToNodePath(root->right,n,path);

    if(isLeft || isRight){
        return true;
    }

    path.pop_back();
    return false;
}

Node* LCA2(Node* root,int n1,int n2){
    if(root == NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA = LCA2(root->left,n1,n2);
    Node* rightLCA = LCA2(root->right,n1,n2);

    if(leftLCA != NULL && rightLCA != NULL){
        return root;
    }

    return leftLCA == NULL ? rightLCA : leftLCA;

}

int dist(Node* root,int n){
    if(root == NULL){
        return -1;
    }

    if(root->data == n){
        return 0;
    }
    
    int leftDist = dist(root->left,n);
    if(leftDist != -1){
        return leftDist + 1;
    }

    int rightDist = dist(root->right,n);
    if(rightDist != -1){
        return rightDist + 1;
    }

    return -1;
}

int minDist(Node* root,int n1,int n2){ //O(n)
    Node* lca = LCA2(root,n1,n2);

    int dist1 = dist(lca,n1);
    int dist2 = dist(lca,n2);

    return dist1 + dist2;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = -1;
    Node* root = buildTree(nodes,idx);
    levelOrder(root);

    int n1 = 4,n2 = 6;

    cout<<"lca2 = "<< LCA2(root,n1,n2)->data<<endl;

    cout<<"min dist : "<< minDist(root,n1,n2)<<endl;

    return 0;
}