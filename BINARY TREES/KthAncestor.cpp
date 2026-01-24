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

int KthAncestor(Node* root,int node,int k){ //O(n)
    if(root == NULL){
        return -1;
    }

    if(root->data == node){
        return 0;
    }

    int leftDist = KthAncestor(root->left,node,k);
    int rightDist = KthAncestor(root->right,node,k);

    int validVal = leftDist == -1 ? rightDist : leftDist;
    if(validVal + 1 == k){
        cout<<"Kth Ancestor : "<<root->data<<endl;
    }

    return validVal + 1;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = -1;
    Node* root = buildTree(nodes,idx);
    levelOrder(root);

    int node = 5,k = 2;

    KthAncestor(root,node,k);
    return 0;
}