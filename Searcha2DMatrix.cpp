/*
 * Searcha2DMatrix.cpp
 *
 *  Created on: Aug 28, 2014
 *      Author: hatemfaheem
 */


class Solution {
public:
    // search for the target in a row
	bool targetBinarySearch(vector<int> & row, int start, int end, int target)
	{
	    if (start > end)
	        return false;
	    int mid = (start+end)/2;
	    if (row[mid]==target)
	        return true;
	    if (row[mid]>target)
	        return targetBinarySearch(row, start, mid-1, target);
	    return targetBinarySearch(row, mid+1, end, target);
	}
	
	// search for the row that contains the target
	int rowBinarySearch(vector<vector<int> > & matrix, int start, int end, int target, int n){
	    if (start > end)
	        return -1;
	    int mid = (start+end)/2;
	    if (matrix[mid][0] <= target && target <= matrix[mid][n-1])
	        return mid;
	    if (matrix[mid][0]>target)
	        return rowBinarySearch(matrix, start, mid-1, target, n);
	    return rowBinarySearch(matrix, mid+1, end, target, n);
	}

    bool searchMatrix(vector<vector<int> > & matrix, int target) {
    	unsigned int m = matrix.size();
    	unsigned int n = matrix[0].size();
    	if (m <= 0 || n <= 0) return false;
    	int row = rowBinarySearch(matrix, 0, matrix.size()-1, target, n);
    	if (row == -1) return false;
    	return targetBinarySearch(matrix[row], 0, matrix[row].size()-1, target);
    }
};
