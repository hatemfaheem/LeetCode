/*
 * FirstMissingPositive.cpp
 *
 *  Created on: Sep 4, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    int firstMissingPositive(int A[], int n)
    {
		// push every element in its place
        for (int i=0; i<n; i++)
        {
            int current = A[i];
            if (current<=0 || current>=n || current==i+1)
                continue;
            swap(A[i], A[current-1]);
            if (A[i] != A[current-1])
                i--;
        }
        int i=0;
        for (; i<n; i++)
            if (A[i]!=i+1)
                break;
        return i+1;
    }
};


