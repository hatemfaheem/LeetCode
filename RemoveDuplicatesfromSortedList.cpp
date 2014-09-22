/*
 * RemoveDuplicatesfromSortedList.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
using namespace std;

/* Definition for singly-linked list. */
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
    	if (head == NULL)
    		return head;
    	ListNode * ptr = head, * prev = head;
    	int current = ptr->val;
    	ptr = ptr->next;
    	while (ptr != NULL)
    	{
    		if (ptr->val == current)
    		{
    			prev->next = ptr->next;
    			ptr = ptr->next;
    		}
    		else
    		{
    			current = ptr->val;
    			prev = ptr;
    			ptr = ptr->next;
    		}
    	}
    	return head;
    }
};
