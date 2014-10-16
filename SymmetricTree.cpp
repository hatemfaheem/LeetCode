/*
 * SymmetricTree.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void inorderTraversal(TreeNode *root, vector<pair<int,int> > & traversal, int level)
	{        
    		if (root == NULL)
		{
    			traversal.push_back(pair<int,int>(-1, level));
	    		return;
	    	}
    	
		inorderTraversal(root->left, traversal, level+1);
		traversal.push_back(pair<int,int>(root->val, level));
		inorderTraversal(root->right, traversal, level+1);

  	  	return;
    }

    bool isSymmetric(TreeNode *root)
    {
		vector<pair<int,int> > inorder;
		this->inorderTraversal(root, inorder, 0);
		for (int i=0, j=inorder.size()-1; i<j; i++, j--)
			if ((inorder[i].first!=inorder[j].first) ||
			    (inorder[i].second!=inorder[j].second))
				return false;
		return true;
    }
};


