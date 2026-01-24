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

//sorted array (inOrder sequence) to balanced BST

Node* buildBSTfromSorted(vector<int> arr,int st,int end){
    if(st > end){
        return NULL;
    }

    int mid = st + (end-st)/2;

    Node* curr = new Node(arr[mid]);
    curr->left = buildBSTfromSorted(arr,st,mid-1);
    curr->right = buildBSTfromSorted(arr,mid+1,end);

    return curr;
}

void getInOrder(Node* root,vector<int> &nodes){
    if(root == NULL){
        return;
    }
    getInOrder(root->left,nodes);
    // cout<<root->data<< " ";
    nodes.push_back(root->data);
    getInOrder(root->right,nodes);
}

//BST TO BALANCED BST CODE

Node* balancedBST(Node* root){
    //get inOrder seq.
    vector<int> nodes;
    getInOrder(root,nodes);
    root = buildBSTfromSorted(nodes,0,nodes.size()-1);
    return root;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){

    // vector<int> arr = {3,4,5,6,7,8,9};
    // Node* Balancedroot = buildBSTfromSorted(arr,0,6);
    // preOrder(Balancedroot);
    // cout<<endl;


    Node* root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);

    preOrder(root);
    cout<<endl;
    root = balancedBST(root);
    preOrder(root);
    cout<<endl;

    return 0;
}