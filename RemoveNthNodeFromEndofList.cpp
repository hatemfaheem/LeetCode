/*
 * RemoveNthNodeFromEndofList.cpp
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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
    	ListNode * ptr = head;
    	int size = 0;
    	while (ptr != NULL)
    	{
    		size += 1;
    		ptr = ptr->next;
    	}
    	ptr = head;
    	if (size == n)
    		head = ptr->next;
    	else{
    		for (int i=0; i<(size-n)-1; ptr=ptr->next, i++);
    		ptr->next = ptr->next->next;
    	}
    	return head;
    }
};

class Solution2 {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
    	ListNode * newHead = new ListNode(0), * ptr1 = newHead, * ptr2 = newHead;
    	newHead->next = head;
    	while (n--)
    		ptr1 = ptr1->next;
    	while (ptr1 != NULL && ptr1->next != NULL){
    		ptr1 = ptr1->next;
    		ptr2 = ptr2->next;
    	}
    	ptr2->next = ptr2->next->next;
    	return newHead->next;
    }
};

/*
void printList(ListNode * head)
{
	ListNode * ptr = head;
	while (ptr != NULL){
		cout << ptr->val << " -> ";
		ptr = ptr->next;
	}
}

/*
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
	n8->next = n9;

	printList(n1);

	Solution2 sol;
	ListNode * res = sol.removeNthFromEnd(n1, 9);

	cout << "\n";
	printList(res);

	return 0;
}
*/
