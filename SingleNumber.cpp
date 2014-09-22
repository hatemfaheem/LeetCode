/*
 * SingleNumber.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: hatemfaheem
 */


#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n) {
        int minv=A[0], maxv=A[0];
        for (unsigned int i=1; i<n; i++)
        {
            if (A[i]<minv) minv=A[i];
            if (A[i]>maxv) maxv=A[i];
        }
        int N = maxv-minv+1;
        int * B = new int[N];
        for (unsigned int i=0; i<N; i++)
            B[i]=0;
        for (unsigned int i=0; i<n; i++)
            B[A[i]-minv]+=1;
        for (unsigned int i=0; i<N; i++)
        {
            if (B[i]==1)
                return (i+minv);
        }
        return -1;
    }
};

class Solution2 {
public:
    int singleNumber(int A[], int n) {
    	int result = 0;
        for (unsigned int i=0; i<n; i++)
        	result ^= A[i];
        return result;
    }
};

