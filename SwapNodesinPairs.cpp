/*
 * SwapNodesinPairs.cpp
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

void printList(ListNode * head)
{
	ListNode * ptr = head;
	while (ptr != NULL){
		cout << ptr->val << " -> ";
		ptr = ptr->next;
	}
}

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
    	if (head == NULL || head->next == NULL)
    		return head;
    	ListNode * p1 = head, * p2 = head, * tmp = new ListNode(0);
    	head = head->next;
    	while (p1 != NULL && p1->next != NULL)
    	{
    		p2 = p2->next;
    		p1->next = p2->next;
    		p2->next = p1;
    		tmp->next = p2;
    		p2 = p1->next;
    		tmp = p1;
    		p1 = p1->next;
    	}
    	return head;
    }
};

int main()
{
	ListNode * n1 = new ListNode(1);
	ListNode * n2 = new ListNode(2);
	ListNode * n3 = new ListNode(3);
	ListNode * n4 = new ListNode(4);
	ListNode * n5 = new ListNode(5);
	ListNode * n6 = new ListNode(6);
	ListNode * n7 = new ListNode(7);
	ListNode * n8 = new ListNode(8);
	ListNode * n9 = new ListNode(9);

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = n8;
	//n8->next = n9;

	printList(n1);cout << "\n";

	Solution sol;
	ListNode * res = sol.swapPairs(n1);

	printList(res);cout << "\n";

	return 0;
}

