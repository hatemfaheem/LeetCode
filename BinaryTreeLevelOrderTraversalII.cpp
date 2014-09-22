/*
 * BinaryTreeLevelOrderTraversalII.cpp
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
	void levelOrderBottom(TreeNode *root, int level, vector<vector<int> >  & order)
	{
		if (root == NULL)
			return;
		if (order.size() <= level)
		{
			vector<int> level;
			order.push_back(level);
		}
		order[level].push_back(root->val);
		this->levelOrderBottom(root->left, level+1, order);
		this->levelOrderBottom(root->right, level+1, order);
	}

    vector<vector<int> > levelOrderBottom(TreeNode *root)
    {
    	vector<vector<int> > revOrder, order;
    	this->levelOrderBottom(root, 0, revOrder);
    	for (int i=revOrder.size()-1; i>=0; i--)
    		order.push_back(revOrder[i]);
    	return order;
    }
};


