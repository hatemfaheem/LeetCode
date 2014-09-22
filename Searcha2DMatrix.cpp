/*
 * Searcha2DMatrix.cpp
 *
 *  Created on: Aug 28, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool binarySearch(vector<int> & matrix, int start, int end, int target)
	{
		if (start < 0 || end >= matrix.size())
			return false;
		int mid = (start + end) / 2;
		if (matrix[mid] == target)
			return true;
		else if (matrix[mid] > target)
			return binarySearch(matrix, start, mid-1, target);
		else
			return binarySearch(matrix, mid+1, end, target);
	}

	bool search(vector<int> & matrix, int target)
	{
		for (unsigned int i=0; i<matrix.size(); i++)
			if (target == matrix[i])
				return true;
		return false;
	}

    bool searchMatrix(vector<vector<int> > &matrix, int target) {
    	unsigned int n = matrix.size();
    	unsigned int m = matrix[0].size();
    	if (n <= 0 || m <= 0 || matrix[0][0] > target || matrix[n-1][m-1] < target)
    		return false;
    	unsigned int row=0;
    	for (; row<n; row++){
    		if (matrix[row][0] <= target && target <= matrix[row][m-1])
    			break;
    	}
    	if (row == n)
    		return false;
    	return search(matrix[row], target);
    }
};

/*
int main()
{
	vector<vector<int> > matrix;
	vector<int> v;
	v.push_back(1);
	//v.push_back(3);
	//v.push_back(5);
	matrix.push_back(v);
	Solution sol;
	cout << sol.searchMatrix(matrix, 1) << "\n";
	return 0;
}
*/
