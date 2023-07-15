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

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

void levelNodes(Node *root, int l, int h)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int x = 1;
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *nod = pr.first;
        int level = pr.second;
        q.pop();

        if (l == level)
        {
            cout << nod->val << " ";
        }
        if(l > h && x == 1)
        {
            cout << "Invalid";
            x--;
        }

        if (nod->left)
            q.push({nod->left, level + 1});
        if (nod->right)
            q.push({nod->right, level + 1});
    }
}

int main()
{
    Node *root = inputTree();
    int l;
    cin >> l;
    int h = maxHeight(root);
    levelNodes(root, l, h-1);
    return 0;
}