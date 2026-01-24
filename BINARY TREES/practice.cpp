#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
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
    currNode->left = buildTree(nodes,idx); //left subtree
    currNode->right = buildTree(nodes,idx); //right subtree

    return currNode;
}

//min distance bw two nodes

Node* lca(Node* root,int n1,int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* leftLca = lca(root->left,n1,n2);
    Node* rightLca = lca(root->right,n1,n2);
    if(leftLca != NULL && rightLca != NULL){
        return root;
    }
    return leftLca == NULL ? rightLca : leftLca;
}

int distlcaton1n2(Node* lca,int n){
    if(lca == NULL){
        return -1;
    }
    if(lca->data == n){
        return 0;
    }
    int left = distlcaton1n2(lca->left,n);
    if(left != -1){
        return left+1;
    }
    int right = distlcaton1n2(lca->right,n);
    if(right != -1){
        return right+1;
    }
    return -1;
}

int minDist(Node* root,int n1,int n2){
    Node* lcadata = lca(root,n1,n2);
    cout<<"lca = "<<lcadata->data<<endl;
    int dist1 = distlcaton1n2(lcadata,n1);
    int dist2 = distlcaton1n2(lcadata,n2);
    return dist1+dist2;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = -1;
    Node* root = buildTree(nodes,idx);
    cout<<minDist(root,5,1);
}