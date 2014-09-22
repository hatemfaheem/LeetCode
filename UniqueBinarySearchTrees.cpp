/*
 * UniqueBinarySearchTrees.cpp
 *
 *  Created on: Sep 22, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    int numTrees(int n)
    {
    	if (n<=1)
    		return 1;
    	int * T = new int[n+1];
    	T[0] = 1;
    	T[1] = 1;
    	for (int i=2; i<=n; i++){
    		T[i]=0;
    		for (int j=1; j<=i; j++)
    			T[i] += (T[j-1] * T[i-j]);
    	}
    	return T[n];
    }
};
