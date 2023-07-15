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
    queue<int> q1;
    queue<int> q2;
    void leafPush1(TreeNode* root1)
    {
        if(root1 == NULL) return;
        leafPush1(root1->left);
        if(root1->left == NULL && root1->right == NULL)
        {
        q1.push(root1->val);
        }
        leafPush1(root1->right);
    }
    void leafPush2(TreeNode* root2)
    {
        if(root2 == NULL) return;
        leafPush2(root2->left);
        if(root2->left == NULL && root2->right == NULL)
        {
        q2.push(root2->val);
        }
        leafPush2(root2->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leafPush1(root1);
        leafPush2(root2);
        if(q1.size() == q2.size())
        {
        while(!q1.empty())
        {
            int x1 = q1.front();
            int x2 = q2.front();
            if(x1 != x2)
            {
                return false;
            }
            q1.pop();
            q2.pop();
        }
        }
        else
        {
            return false;
        }

        return true;
    }
};