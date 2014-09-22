/*
 * ConvertSortedArraytoBinarySearchTree.cpp
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
	TreeNode *sortedArrayToBST(vector<int> &num, int start, int end)
	{
		if (start > end)
			return NULL;
		int mid = (start + end)/ 2;
		TreeNode * root = new TreeNode(num[mid]);
		root->left = sortedArrayToBST(num, start, mid-1);
		root->right = sortedArrayToBST(num, mid+1, end);
		return root;
	}

    TreeNode *sortedArrayToBST(vector<int> &num)
    {
    	return (this->sortedArrayToBST(num, 0, num.size()-1));
    }

    void printTree(TreeNode * root)
    {
    	if (root == NULL)
    		return;
    	cout << "N" << root->val << " - ";
    	if (root->left != NULL) cout << "L" << root->left->val << " - ";
    	else cout << "LX - ";
    	if (root->right != NULL) cout << "R" << root->right->val << "\n";
    	else cout << "RX\n";
    	if (root->left != NULL) printTree(root->left);
    	if (root->left != NULL) printTree(root->right);
    }
};

int main()
{
	Solution solution;
	int nums[] = {1,2,3,4,5,6,7,8};
	vector<int> V(nums, nums+5);
	TreeNode * tree = solution.sortedArrayToBST(V);
	solution.printTree(tree);
	return 0;
}


