/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL) return true;
        int l = root->val;
        queue<int> q1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *f = q.front();
            q.pop();

            q1.push(f->val);
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        } 

        
        while(!q1.empty())
        {
            int s = q1.front();
            if(l != s)
            {
               return false;
            }
            q1.pop();
        }

      return true;
    }
};