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

void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    //root
    cout<<root->data<< " ";
    //left
    preOrder(root->left);
    //right
    preOrder(root->right);

}

void inOrder(Node* root){
    if(root == NULL){
        return;
    }

    //left
    inOrder(root->left);
    //root
    cout<<root->data<<" ";
    //right
    inOrder(root->right);

}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }

    //left
    postOrder(root->left);
    //right
    postOrder(root->right);
    //root
    cout<<root->data<<" ";
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL); 
    int height = 0;
    int sum = 0;
    while(!Q.empty()){
        
        Node* curr = Q.front();
        Q.pop();
        if(curr == NULL){
            height++;
            cout<<"  levelsum  = "<<sum; 
            sum = 0;
            cout<<endl;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);// TO Track next line
        }else{
            cout<<curr->data<<" ";
            sum = sum + curr->data;
            if(curr->left != NULL){
                Q.push(curr->left);
            }
            if(curr->right != NULL){
                Q.push(curr->right);
            }
        } 
    }

    cout<<"height of tree is : "<<height<<endl;
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

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    return leftCount + rightCount + 1;
}

int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftNodesSum = sumNodes(root->left);
    int rightNodesSum = sumNodes(root->right);

    return leftNodesSum + rightNodesSum + root->data;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> secondTree = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};

    int idx1 = -1;
    int idx2 = -1;

    cout<<"---------FOR TREE1---------"<<endl;

    Node* root1 = buildTree(nodes, idx1);

    cout<<"root1 = "<< root1->data <<endl;

    cout<<"preOrder : ";
    preOrder(root1);
    cout<<endl;
    
    cout<<"inOrder : ";
    inOrder(root1);
    cout<<endl;

    cout<<"postOrder : ";
    postOrder(root1);
    cout<<endl;

    cout<<"---------FOR TREE2---------"<<endl;
    Node* root2 = buildTree(secondTree, idx2);

    cout<<"root1 = "<< root1->data <<endl;

    cout<<"level Order"<<endl;
    levelOrder(root2);
    
    cout<<"Height of Tree : "<<height(root2)<<endl;

    cout<<"Total Nodes : "<<countNodes(root2)<<endl;

    cout<<"sum of nodes : "<<sumNodes(root2)<<endl;

    cout<<"---------FOR TREE3---------"<<endl;
    Node* root3 = new Node(1);
    root3->left = new Node(2);
    root3->right = new Node(3);

    cout<<"Total Nodes for root3 tree : "<<countNodes(root3)<<endl;
}