/*
 * PopulatingNextRightPointersinEachNode.cpp
 *
 *  Created on: Sep 14, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/* Definition for binary tree with next pointer. */
struct TreeLinkNode {
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) :
			val(x), left(NULL), right(NULL), next(NULL) {
	}
};

class Solution {
public:

	void connect(TreeLinkNode *root)
	{
	}
};

