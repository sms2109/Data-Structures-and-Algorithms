#include<iostream>
#include<vector>
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

bool isIdentical(Node* root,Node* subRoot){
    if(root == NULL && subRoot == NULL){
        return true;
    }else if(root == NULL || subRoot == NULL){
        return false;
    }

    if(root->data != subRoot->data){
        return false;
    }

    return isIdentical(root->left,subRoot->left) && isIdentical(root->right,subRoot->right);
}

bool isSubtree(Node* root,Node* subRoot){
    if(root == NULL && subRoot == NULL){
        return true;
    }else if(root == NULL || subRoot == NULL){
        return false;
    }

    if(root->data == subRoot->data){
        if(isIdentical(root,subRoot)){
            return true;
        }
    }

    int isLeftSubtree = isSubtree(root->left,subRoot);
    if(!isLeftSubtree){
        return isSubtree(root->right,subRoot);
    }

    return true;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = -1;
    Node* root1 = buildTree(nodes,idx);

    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);

    cout<<"isSubtree : " <<isSubtree(root1,subRoot)<<endl;

    return 0;
}