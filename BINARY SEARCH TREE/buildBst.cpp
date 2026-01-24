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

Node* insert(Node* root,int node){ 
    if(root == NULL){
        root = new Node(node);
        return root;
    }

    if(node < root->data){ //left subtree
        root->left = insert(root->left,node);
    }else{  //right subtree
        root->right = insert(root->right,node);
    }

    return root;
}

bool searchInBST(Node* root,int key){  //O(Height)
    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(key < root->data){
        return searchInBST(root->left,key);
    }else{
        return searchInBST(root->right,key);
    }
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

Node* delLeafNode(Node* root,int node){
    if(root == NULL){
        return NULL;
    }
    if(node < root->data){
        root->left = delLeafNode(root->left,node);
    }
    if(node > root->data){
        root->right = delLeafNode(root->right,node);
    }
    if(root->data == node){
        delete root;
    }
    return NULL;
}

Node* delNodewithoneChild(Node* root,int node){
    if(root == NULL){
        return NULL;
    }
    if(node < root->data){
        root->left = delLeafNode(root->left,node);
    }
    if(node > root->data){
        root->right = delLeafNode(root->right,node);
    }
    
    Node* validNode = root->left == NULL ? root->right : root->left;
    delete root;
    return validNode;  
}

int main(){
    int arr[6] = {5,1,3,4,2,7};
    int arr2[8] = {7,5,9,3,8,10,1,4};

    Node* root = buildBST(arr,6);
    inOrder(root);
    cout<<endl;
    cout<<searchInBST(root,7)<<endl;
    delLeafNode(root,7);
    inOrder(root);
    cout<<endl;
    cout<<"---------"<<endl;
    Node* root2 = buildBST(arr2,8);
    inOrder(root2);
    cout<<endl;
    delNodewithoneChild(root2,5);
    inOrder(root2);
    return 0;
}