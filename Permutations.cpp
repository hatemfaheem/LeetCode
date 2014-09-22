/*
 * Permutations.cpp
 *
 *  Created on: Sep 22, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

	void swap(int & a, int & b){
		a = a + b;
		b = a - b;
		a = a - b;
	}

	bool nextPermutation(vector<int> & num)
	{
		int k=num.size()-2;
		while (k>=0 && num[k] >= num[k+1])
			k--;
		if (k<0)
			return false;
		int l=num.size()-1;
		while (l>k && num[k] >= num[l])
			l--;
		swap(num[k], num[l]);
		for (int i=k+1, j=num.size()-1; i<j; i++, j--)
			swap(num[i], num[j]);
		return true;
	}

    vector<vector<int> > permute(vector<int> &num) {
        sort(num.begin(), num.end());
        vector<vector<int> > permutations;
        do{
        		permutations.push_back(num);
        }while(nextPermutation(num));
        return permutations;
    }
};
