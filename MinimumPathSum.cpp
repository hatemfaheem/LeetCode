/*
 * MinimumPathSum.cpp
 *
 *  Created on: Aug 28, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid){
        unsigned int rows = grid.size();
        unsigned int cols = grid[0].size();
        for (unsigned int i=1; i<rows; i++)
        	grid[i][0] += grid[i-1][0];
        for (unsigned int j=1; j<cols; j++)
        	grid[0][j] += grid[0][j-1];
    	for (unsigned int i=1; i<rows; i++)
    		for (unsigned int j=1; j<cols; j++)
    			grid[i][j] += (grid[i-1][j] < grid[i][j-1])?
    					(grid[i-1][j]):(grid[i][j-1]);
    	return grid[rows-1][cols-1];
    }
};

