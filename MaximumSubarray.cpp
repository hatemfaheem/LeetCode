/*
 * MaximumSubarray.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int maxSubArray(int A[], int n, int & maxStart, int & maxEnd)
    {
    	int maxSum=A[0];
    	int currentStart=0;
    	for (int i=1; i<n; i++)
    	{
    		if (A[i] < A[i]+A[i-1])
    			A[i] = A[i]+A[i-1];
    		else
    			currentStart = i;

    		if (A[i] > maxSum)
    		{
    			maxSum = A[i];
    			maxEnd = i;
    			maxStart = currentStart;
    		}
    	}
    	return maxSum;
    }
};


int main()
{
	int A[] = {12, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
	Solution sol;
	int maxStart=-1, maxEnd=-1;
	int maxSum = sol.maxSubArray(A, 16, maxStart, maxEnd);
	cout << maxSum << "\t" << maxStart << "\t" << maxEnd << "\n";
	return 0;
}
