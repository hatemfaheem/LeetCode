/*
 * MinimumDepthofBinaryTree.cpp
 *
 *  Created on: Sep 2, 2014
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
    int minDepth(TreeNode *root)
    {
    	if (root == NULL)
    		return 0;
    	if (root->left != NULL && root->right == NULL)
    	    return minDepth(root->left) + 1;
    	if (root->left == NULL && root->right != NULL)
    	    return minDepth(root->right) + 1;
    	int leftDepth = minDepth(root->left) + 1;
    	int rightDepth = minDepth(root->right) + 1;
    	if (leftDepth < rightDepth)
    		return (leftDepth);
    	return (rightDepth);
    }
};
