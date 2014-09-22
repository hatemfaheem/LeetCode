/*
 * SymmetricTree.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

/* Definition for binary tree */
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
    	vector<int> traversal, left, right;
    	if (root == NULL)
    		traversal.push_back(-1);
    	else if (root->left == NULL && root->right == NULL)
    		traversal.push_back(root->val);
    	else
    	{
			left = inorderTraversal(root->left);
			for (unsigned int i=0; i<left.size(); i++)
				traversal.push_back(left[i]);
			traversal.push_back(root->val);
			right = inorderTraversal(root->right);
			for (unsigned int i=0; i<right.size(); i++)
				traversal.push_back(right[i]);
    	}
    	return traversal;
    }

    bool isSymmetric(TreeNode *root)
    {
    	vector<int> inorder = this->inorderTraversal(root);
    	for (int i=0, j=inorder.size()-1; i<j; i++, j--)
    		if (inorder[i]!=inorder[j])
    			return false;
    	return true;
    }
};

int main()
{
	TreeNode * n1 = new TreeNode(1);
	TreeNode * n21 = new TreeNode(2);
	TreeNode * n22 = new TreeNode(2);
	TreeNode * n31 = new TreeNode(3);
	TreeNode * n32 = new TreeNode(3);

	n1->left = n21;
	n1->right = n31;
	n21->left = n32;
	n31->left = n22;

	Solution sol;
	vector<int> v = sol.inorderTraversal(n1);
	for (unsigned int i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";

	return 0;
}


