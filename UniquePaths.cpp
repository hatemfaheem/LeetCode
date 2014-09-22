/*
 * UniquePaths.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    int uniquePaths(int m, int n) {
        unsigned long long int grid[100][100];
        for (int i=0; i<100; i++)
        	for (int j=0; j<100; j++)
        		grid[i][j] = 1;
        for (int i=1; i<m; i++)
        	for (int j=1; j<n; j++)
        		grid[i][j] = grid[i][j-1]+grid[i-1][j];
        return grid[m-1][n-1];
    }
};
