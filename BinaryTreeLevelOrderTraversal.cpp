/*
 * BinaryTreeLevelOrderTraversal.cpp
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
	void levelOrder(TreeNode *root, int level, vector<vector<int> >  & order)
	{
		if (root == NULL)
			return;
		if (order.size() <= level)
		{
			vector<int> level;
			order.push_back(level);
		}
		order[level].push_back(root->val);
		this->levelOrder(root->left, level+1, order);
		this->levelOrder(root->right, level+1, order);
	}

    vector<vector<int> > levelOrder(TreeNode *root)
    {
    	vector<vector<int> > order;
    	this->levelOrder(root, 0, order);
    	return order;
    }
};


