#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> v;
void inOrderTraversal(TreeNode *root)
{
    if(root == NULL) return;
    inOrderTraversal(root->left);
    v.push_back(root->data);
    inOrderTraversal(root->right);
    
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear();
    // Write your code here.
    inOrderTraversal(root);
    return v;
}