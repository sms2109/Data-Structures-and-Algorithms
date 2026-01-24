#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *buildTree(vector<int> &nodes, int &idx)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }

    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes, idx);  // left subtree
    currNode->right = buildTree(nodes, idx); // right subtree

    return currNode;
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> Q;
    Q.push(root);
    Q.push(NULL);
    int height = 0;
    int sum = 0;
    while (!Q.empty())
    {

        Node *curr = Q.front();
        Q.pop();
        if (curr == NULL)
        {
            height++;
            cout << "  levelsum  = " << sum;
            sum = 0;
            cout << endl;
            if (Q.empty())
            {
                break;
            }
            Q.push(NULL); // TO Track next line
        }
        else
        {
            cout << curr->data << " ";
            sum = sum + curr->data;
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

    cout << "height of tree is : " << height << endl;
}

void topView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> Q; //(node,HD)
    map<int, int> m;            //(HD,node->data);

    Q.push(make_pair(root, 0));
    while (!Q.empty())
    {
        pair<Node *, int> curr = Q.front();
        Q.pop();

        Node *currNode = curr.first;
        int currHD = curr.second;

        if (m.count(currHD) == 0)
        { // first time , unique , add in map , //not exists
            m[currHD] = currNode->data;
        }

        if (currNode->left != NULL)
        {
            pair<Node *, int> left = make_pair(currNode->left, currHD - 1);
            Q.push(left);
        }

        if (currNode->right != NULL)
        {
            pair<Node *, int> right = make_pair(currNode->right, currHD + 1);
            Q.push(right);
        }
    }

    for (auto it : m)
    {
        cout << it.second << " ";
    }
    
}

void bottomView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> q;
    map<int, int> m; // hd,node->data

    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        Node *currNode = q.front().first;
        int currHD = q.front().second;
        q.pop();

        m[currHD] = currNode->data;
        if (currNode->left != NULL)
        {
            pair<Node *, int> left = make_pair(currNode->left, currHD - 1);
            q.push(left);
        }
        if (currNode->right != NULL)
        {
            pair<Node *, int> right = make_pair(currNode->right, currHD + 1);
            q.push(right);
        }
    }

    for (auto it : m)
    {
        cout << it.second << " ";
    }
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> nodes2 = {1, 2, 3, 4, -1, -1, 5, -1, -1, -1, 6, -1, 7, 8, -1, -1, 9, -1, -1};
    int idx1 = -1;
    int idx2 = -1;
    Node *root1 = buildTree(nodes, idx1);
    Node *root2 = buildTree(nodes2, idx2);
    // levelOrder(root1);
    cout << "topView : ";
    topView(root1);
    cout << endl
         << "bottomView : ";
    bottomView(root1);
    cout<<endl;
    cout << "topView : ";
    topView(root2);
    cout << endl
         << "bottomView : ";
    bottomView(root2);

    return 0;
}