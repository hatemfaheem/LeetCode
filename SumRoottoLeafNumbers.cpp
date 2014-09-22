/*
 * SumRoottoLeafNumbers.cpp
 *
 *  Created on: Aug 29, 2014
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
	int sumTree(TreeNode * node, int number)
	{
		if (node == NULL)
			return 0;
		int n = (number * 10) + node->val;
		if (node->left == NULL && node->right == NULL)
			return n;
		return sumTree(node->left, n) + sumTree(node->right, n);
	}

    int sumNumbers(TreeNode *root) {
    	return sumTree(root, 0);
    }
};
