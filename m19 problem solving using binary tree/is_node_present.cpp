/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int y = 0;
void p(BinaryTreeNode<int> *root, int x)
{
    if(root == NULL) return;
    if(root->data == x)
    {
        y = 1;
    }
    p(root->left, x);
    p(root->right, x);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    p(root, x);
    if(y == 0) return false;
    else return true;
}