/*
 * UniquePathsII.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
    	if (obstacleGrid.size() <=0 || obstacleGrid[0].size() <= 0)
    		return 0;
    	int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        unsigned long long int grid[100][100];
        grid[0][0] = 1 - obstacleGrid[0][0];
        for (int i=1; i<m; i++)
        {
        	if (obstacleGrid[i][0]==1 || grid[i-1][0]==0)
        		grid[i][0] = 0;
        	else
        		grid[i][0] = 1;
        }
        for (int j=0; j<n; j++)
        {
        	if (obstacleGrid[0][j]==1 || grid[0][j-1]==0)
        		grid[0][j] = 0;
        	else
        		grid[0][j] = 1;
        }
        for (int i=1; i<m; i++){
        	for (int j=1; j<n; j++){
        		if (obstacleGrid[i][j] == 1)
        			grid[i][j] = 0;
        		else
        			grid[i][j] = grid[i][j-1]+grid[i-1][j];
        	}
        }
        return grid[m-1][n-1];
    }
};

/*
int main()
{
	vector<int> v;
	v.push_back(1);
	vector<vector<int> > g;
	g.push_back(v);
	Solution solution;
	cout << solution.uniquePathsWithObstacles(g) << "\n";
	return 0;
}
*/


