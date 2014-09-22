/*
 * MergeSortedArray.cpp
 *
 *  Created on: Aug 28, 2014
 *      Author: hatemfaheem
 */


class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
    	int i=m-1, j=n-1, current = m+n-1;
    	while (i>=0 && j>=0){
    		if (A[i]>=B[j])
    			A[current--]=A[i--];
    		else
    			A[current--]=B[j--];
    	}
    	while(j>=0)
    		A[current--]=B[j--];
    }
};

