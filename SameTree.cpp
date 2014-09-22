/*
 * SameTree.cpp
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
    bool isSameTree(TreeNode *p, TreeNode *q) {
    	if (p == NULL && q == NULL) return true;
    	if (p == NULL && q != NULL) return false;
    	if (p != NULL && q == NULL) return false;
    	bool b1 = (p->val == q->val);
    	bool b2 = isSameTree(p->left, q->left);
    	bool b3 = isSameTree(p->right, q->right);
    	return (b1 && b2 && b3);
    }
};


