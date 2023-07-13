#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int> v;
void postOrderTraversal(TreeNode *root)
{
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    v.push_back(root->val);

}
vector<int> postorderTraversal(TreeNode* root)
{
    v.clear();
    postOrderTraversal(root);
    return v;
}
