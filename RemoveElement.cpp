/*
 * RemoveElement.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: hatemfaheem
 */


class Solution {
public:
    int removeElement(int A[], int n, int elem) {
    	int newSize = 0, next = 0;
    	for (int i=0; i<n; i++){
    		if (A[i]!=elem)
    		{
    			newSize += 1;
    			A[next++] = A[i];
    		}
    	}
    	return newSize;
    }
};

