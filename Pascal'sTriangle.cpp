/*
 * Pascal'sTriangle.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void addPascalRow(vector<vector<int> > & pascalTriangle)
	{
		int nextRow = pascalTriangle.size() + 1;
		vector<int> row;
		row.push_back(1);
		if (nextRow == 1)
		{
		}
		else if (nextRow == 2)
		{
			row.push_back(1);
		}
		else
		{
			for (int i=1; i<nextRow-1; i++)
				row.push_back(pascalTriangle[nextRow-2][i-1]+pascalTriangle[nextRow-2][i]);
			row.push_back(1);
		}

		pascalTriangle.push_back(row);
	}

    vector<vector<int> > generate(int numRows) {
    	vector<vector<int> > pascalTriangle;
    	for (int i=0; i<numRows; i++)
    		addPascalRow(pascalTriangle);
    	return pascalTriangle;
    }

    void printMatrix(vector<vector<int> > matrix)
    {
    	for (int i=0; i<matrix.size(); i++){
    		for (int j=0; j<matrix[i].size(); j++)
    			cout << matrix[i][j] << " ";
    		cout << "\n";
    	}
    }
};


int main()
{
	Solution sol;
	vector<vector<int> > res = sol.generate(10);
	sol.printMatrix(res);
	return 0;
}


