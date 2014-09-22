/*
 * PlusOne.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void printVector(const vector<int> &digits)
	{
		for (unsigned int i=0; i<digits.size(); i++)
			cout << digits[i];
		cout << "\n";
	}

    vector<int> plusOne(vector<int> &digits) {
    	vector<int> result;
    	for (unsigned int i=0; i<digits.size(); i++)
    		result.push_back(0);
    	result.push_back(1);
    	int  remainder = 0;
    	for (int i=digits.size()-1; i>=0; i--)
    	{
    		int res = digits[i] + result[i+1] + remainder;
    		result[i+1] = res % 10;
    		remainder = res / 10;
    	}
    	if (remainder != 0)
    		result[0] = remainder;
    	else
    		result.erase(result.begin());
    	return result;
    }
};


int main()
{
	vector<int> v;
	v.push_back(0);
	Solution sol;
	sol.printVector(v);
	v = sol.plusOne(v);
	sol.printVector(v);
	cout << "hello\n";
	return 0;
}

