#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        f->left = myLeft;
        f->right = myRight;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void levelOrder(Node *root)
{
    if (root == NULL) return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
    
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

   
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void insertBST(Node *root, int x)
{
    if(root == NULL)
    {
        root = new Node(x);
    }

    if(x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insertBST(root->left, x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insertBST(root->right, x);
        }
    }
}

int main()
{
    Node *root = inputTree();
    insertBST(root, 13);
    insertBST(root, 32);
    levelOrder(root);
    return 0;
}