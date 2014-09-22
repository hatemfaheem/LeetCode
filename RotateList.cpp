/*
 * RotateList.cpp
 *
 *  Created on: Aug 30, 2014
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
    ListNode *rotateRight(ListNode *head, int k) {
    	if (k == 0 || head == NULL)
    		return head;
    	ListNode * slow = head, * fast = head;
    	for (int i=0; i<k; i++)
    	{
    		if (fast == NULL)
    			fast = head;
    		fast = fast->next;
    	}
    	while(fast != NULL && (fast->next)!=NULL)
    	{
    		slow = slow->next;
    		fast = fast->next;
    	}
    	if (fast == NULL)
    		return head;
    	fast->next = head;
    	head = slow->next;
    	slow->next = NULL;
    	return head;
    }

    void printList(ListNode * head)
    {
    	ListNode * ptr = head;
    	while (ptr != NULL){
    		cout << ptr->val << "->";
    		ptr = ptr->next;
    	}
    }
};

/*
int main(){
	ListNode * head = new ListNode(1);
	head->next = new ListNode(2);
	Solution solution;
	ListNode * rt = solution.rotateRight(head, 2);
	solution.printList(rt); cout << "\n";
	return 0;
}
*/


