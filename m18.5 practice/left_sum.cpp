#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/

long long l = 0;
long long Sum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	if(root == NULL) return 0;
	
	if(root->left)
	{
		 l = Sum(root->left) + root->left->data;
	}
	int r = Sum(root->right);
	return l;
	
	
}


long long leftSum(BinaryTreeNode<int> *root)
{
	
   l = 0;
   return Sum(root);
	
}