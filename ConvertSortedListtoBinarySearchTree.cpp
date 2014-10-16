#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
            return new TreeNode(head->val);
            
        ListNode * p1 = head, * p2 = head, * prev = head;
        while ((p1!=NULL) && ((p1->next)!=NULL))
		{
            p1 = p1->next->next;
			prev = p2;
            p2 = p2->next;
        }
            
        TreeNode * root = new TreeNode(p2->val);
        p1 = p2->next;
        prev->next = NULL;
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(p1);
        
        return root;
    }
};







