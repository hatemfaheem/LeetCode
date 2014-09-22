/*
 * SortColors.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    void sortColors(int A[], int n)
    {
    	int zero=0, one=0, two=0;
    	for (int i=0; i<n; i++)
    	{
    		if (A[i]==0)
    		{
    			A[two++]=2;
    			A[one++]=1;
    			A[zero++]=0;
    		}
    		else if (A[i]==1)
    		{
    			A[two++]=2;
    			A[one++]=1;
    		}
    		else if (A[i]==2)
    		{
    			A[two++]=2;
    		}
    	}
    }
};

