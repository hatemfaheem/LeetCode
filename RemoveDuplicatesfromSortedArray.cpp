/*
 * RemoveDuplicatesfromSortedArray.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(int A[], int n) {
    	if (n == 0) return 0;
    	int newSize = 1, next = 1;
    	for (int i=1; i<n; i++){
    		if (((A[i])^(A[i-1])) != (0))
    		{
    			newSize += 1;
    			A[next] = A[i];
    			next += 1;
    		}
    	}
    	return newSize;
    }
};


