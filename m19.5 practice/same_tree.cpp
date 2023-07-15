class Solution {
public:
vector<int> v1, v2;
void preOrder(TreeNode* p, vector<int>& v) {
if (!p) {
v.push_back(-1); // Use a special value to represent null nodes
return;
}
v.push_back(p->val);
preOrder(p->left, v);
preOrder(p->right, v);
}
bool isSameTree(TreeNode* p, TreeNode* q) {
preOrder(p, v1);
preOrder(q, v2);
return v1 == v2;
}
};