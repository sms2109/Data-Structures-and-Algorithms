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

Node* insert(Node* root,int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(root->data < val){
        root->right = insert(root->right,val);
    }else{
        root->left = insert(root->left,val);
    }
    return root;
}

Node* buildBST(int arr[],int n){
    Node* root = NULL;
    for(int i=0;i<n;i++){
        root = insert(root,arr[i]);
    }
    return root;
}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

Node* getInorderSuccessor(Node* root){
    while(root->left != NULL ){
        root = root->left;
    }
    return root;
}

Node* delNode(Node* root,int val){
    if(root == NULL){
        return NULL;
    }
    if(val < root->data){
        root->left = delNode(root->left,val);
    }else if(val > root->data){
        root->right = delNode(root->right,val);
    }else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right : root->left;
        }

        Node* IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right,IS->data);
        return root;
    }
    return root;
}

int main(){
    int arr[8] = {7,5,9,3,8,10,1,4};

    Node* root = buildBST(arr,8);
    inOrder(root);
    cout<<endl;
    insert(root,2);
    inOrder(root);
    cout<<endl;
    delNode(root,2);
    inOrder(root);
    cout<<endl;
    delNode(root,5);
    inOrder(root);
}