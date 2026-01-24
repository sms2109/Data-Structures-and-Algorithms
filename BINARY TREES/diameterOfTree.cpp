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


int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHeigth = height(root->left);
    int rightHeigth = height(root->right);

    int currHeight = max(leftHeigth,rightHeigth) + 1;
    return currHeight;
}


int diameter1(Node* root){
    if(root == NULL){
        return 0;
    }
    
    int currDiam = height(root->left) + height(root->right) + 1;
    int leftDiam = diameter1(root->left);
    int rightDiam = diameter1(root->right);

    return max(currDiam,max(leftDiam,rightDiam));
}

pair<int,int> diameter2(Node* root){ //O(n)
    if(root == NULL){
        return make_pair(0,0);
    }

    pair<int,int> leftInfo = diameter2(root->left);
    pair<int,int> rightInfo = diameter2(root->right);

    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDiam = max(currDiam,max(leftInfo.first,rightInfo.first));
    int finalHt = max(leftInfo.second , rightInfo.second) + 1;

    return make_pair(finalDiam,finalHt);
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> secondTree = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};

    int idx1 = -1;
    int idx2 = -1;

    Node* root1 = buildTree(nodes, idx1);
    Node* root2 = buildTree(secondTree, idx2);



    cout<<"Diameter : "<<diameter1(root2)<<endl;
    cout<<"Diameter : "<<diameter2(root2).first<<endl;


    return 0;
} 