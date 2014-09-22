/*
 * Pascal'sTriangleII.cpp
 *
 *  Created on: Aug 31, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
    	vector<int> row;
    	if (rowIndex < 0)
    		return row;

    	while(row.size() < rowIndex+1)
    	{
    		row.push_back(1);
    		int i=1, j=row.size()-2;
			for (; i<j; i++, j--)
			{
				int value = row[j] + row[j-1];
				row[i] = value;
				row[j] = value;
			}
			if (i==j)
				row[i] = 2 * row[i];
    	}
    	return row;
    }

    void printVector(vector<int> row)
    {
    	for (int i=0; i<row.size(); i++)
    		cout << row[i] << " ";
    	cout << "\n";
    }
};

int main()
{
	Solution solution;
	for (int i=0; i<=10; i++)
		solution.printVector(solution.getRow(i));

	return 0;
}

