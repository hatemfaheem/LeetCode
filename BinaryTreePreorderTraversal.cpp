/*
 * BinaryTreePreorderTraversal.cpp
 *
 *  Created on: Aug 27, 2014
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
    vector<int> preorderTraversal(TreeNode *root) {
    	vector<int> traversal, left, right;
    	if (root == NULL)
    		return traversal;
    	traversal.push_back(root->val);
    	if (root->left != NULL)
    		left = preorderTraversal(root->left);
    	for (unsigned int i=0; i<left.size(); i++)
    		traversal.push_back(left[i]);
    	if (root->right != NULL)
    		right = preorderTraversal(root->right);
    	for (unsigned int i=0; i<right.size(); i++)
    		traversal.push_back(right[i]);
    	return traversal;
    }
};




