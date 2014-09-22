/*
 * RotateImage.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void swapValues(int & a, int & b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	void transpose(vector<vector<int> > &matrix)
	{
		for (int i=0; i<matrix.size(); i++)
			for (int j=i+1; j<matrix[i].size(); j++)
				swapValues(matrix[i][j], matrix[j][i]);
	}

	void mirror(vector<vector<int> > &matrix)
	{
		for (int i=0, j=matrix[0].size()-1; i<j; i++, j--)
			for (int k=0; k<matrix.size(); k++)
				swapValues(matrix[k][i], matrix[k][j]);
	}

    void rotate(vector<vector<int> > &matrix)
    {
    	transpose(matrix);
    	mirror(matrix);
    }
};
