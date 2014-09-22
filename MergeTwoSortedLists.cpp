/*
 * MergeTwoSortedLists.cpp
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
    	if (l1 == NULL) return l2;
    	if (l2 == NULL) return l1;
    	ListNode * ptr1 = l1, * ptr2 = l2;
    	ListNode * mergedList = NULL;
    	if (l1->val <= l2->val){
    		mergedList = new ListNode(ptr1->val);
    		ptr1 = ptr1->next;
    	}
    	else{
    		mergedList = new ListNode(ptr2->val);
    		ptr2 = ptr2->next;
    	}
    	ListNode * ptr = mergedList;
    	while (ptr1 != NULL && ptr2 != NULL)
    	{
    		if (ptr1->val <= ptr2->val){
    			ptr->next = new ListNode(ptr1->val);
    			ptr1 = ptr1->next;
    		}
    		else{
    			ptr->next = new ListNode(ptr2->val);
    			ptr2 = ptr2->next;
    		}
    		ptr = ptr->next;
    	}
    	while (ptr1 != NULL){
			ptr->next = new ListNode(ptr1->val);
			ptr1 = ptr1->next;
			ptr = ptr->next;
    	}
    	while (ptr2 != NULL){
			ptr->next = new ListNode(ptr2->val);
			ptr2 = ptr2->next;
			ptr = ptr->next;
    	}
    	return mergedList;
    }
};


class Solution2 {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
    	if (l1 == NULL) return l2;
    	if (l2 == NULL) return l1;
    	ListNode * ptr1 = l1, * ptr2 = l2;
    	ListNode * mergedList = NULL;
    	if (l1->val <= l2->val){
    		mergedList = l1;
    		ptr1 = ptr1->next;
    	}
    	else{
    		mergedList = l2;
    		ptr2 = ptr2->next;
    	}
    	ListNode * current = mergedList;

    	while (ptr1 != NULL || ptr2 != NULL)
    	{
    		if (ptr1 == NULL)
    		{
    			current->next = ptr2;
    			current = current->next;
    			ptr2 = ptr2->next;
    		}
    		else if (ptr2 == NULL)
    		{
    			current->next = ptr1;
    			current = current->next;
    			ptr1 = ptr1->next;
    		}
    		else
    		{
    			if (ptr1->val <= ptr2->val)
    			{
        			current->next = ptr1;
        			current = current->next;
        			ptr1 = ptr1->next;
    			}
    			else
    			{
        			current->next = ptr2;
        			current = current->next;
        			ptr2 = ptr2->next;
    			}
    		}
    	}

    	return mergedList;
    }
};


