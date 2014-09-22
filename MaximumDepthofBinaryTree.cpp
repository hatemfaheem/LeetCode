/*
 * MaximumDepthofBinaryTree.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
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
    int maxDepth(TreeNode *root) {
    	if (root == NULL)
    		return 0;
    	int leftDepth = maxDepth(root->left);
    	int rightDepth = maxDepth(root->right);
    	if (leftDepth > rightDepth)
    		return (leftDepth + 1);
    	return (rightDepth + 1);
    }
};

