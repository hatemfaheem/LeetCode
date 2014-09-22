/*
 * LinkedListCycle.cpp
 *
 *  Created on: Aug 26, 2014
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
    bool hasCycle(ListNode *head) {
    	if (head == NULL)
    		return false;
    	ListNode * p1 = head, * p2 = head;
    	while (p1 != NULL && p1->next != NULL){
    		p1 = p1->next->next;
    		p2 = p2->next;
    		if (p1 == p2)
    			return true;
    	}
    	return false;
    }
};

