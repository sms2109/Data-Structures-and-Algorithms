#include<iostream>
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

Node* buildTree(vector<int> &nodes,int &idx){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes,idx); //left subtree
    currNode->right = buildTree(nodes,idx); //right subtree

    return currNode;
}

//iterative search
void UsinglevelOrder(Node *root,int k)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> Q;
    Q.push(root);
    Q.push(NULL);
    int x = 1; //currLevel
   
    while (!Q.empty())
    {

        Node *curr = Q.front();
        Q.pop();
        if (curr == NULL)
        {
            x++;
            if (Q.empty())
            {
                break;
            }
            Q.push(NULL); // TO Track next line
        }
        else
        {
            if( x == k){
                cout << curr->data << " ";
            }
            
            if (curr->left != NULL)
            {
                Q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                Q.push(curr->right);
            }
        }
    }

}

//recursive
void KthHelper(Node* root,int K,int currLevel){
    if(root == NULL){
        return;
    }

    if(currLevel == K){
        cout<<root->data<<" ";
        return;
    }

    KthHelper(root->left,K,currLevel+1); //left
    KthHelper(root->right,K,currLevel+1); //right
}

void KthLevel(Node* root,int K){  //O(n)
    KthHelper(root,K,1);
    cout<<endl;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = -1;
    Node* root1 = buildTree(nodes, idx);
    UsinglevelOrder(root1,3);
    cout<<endl;
    KthLevel(root1,3);
    return 0; 
}