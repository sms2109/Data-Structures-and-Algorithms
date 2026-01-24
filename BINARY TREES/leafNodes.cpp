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

// static int idx = -1;
Node* buildTree(vector<int> nodes,int &idx){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    // cout<<"left call of "<<currNode->data<<endl;
    currNode->left = buildTree(nodes,idx); //left subtree
    // cout<<"right call of "<<currNode->data<<endl;
    currNode->right = buildTree(nodes,idx); //right subtree

    return currNode;
}

void leaves(Node* root){
    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
    }

    leaves(root->left);
    leaves(root->right);
}
//root to leaf node paths

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> nodes2 = {1,2,3,4,-1,-1,5,-1,-1,-1,6,-1,7,8,-1,-1,9,-1,-1};
    int idx = -1;
    Node* root2 = buildTree(nodes2,idx);
    leaves(root2);
}