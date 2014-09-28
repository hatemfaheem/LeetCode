class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle)
    {
        if (triangle.size() <= 0) return 0;
        for (int i=1; i<triangle.size(); i++) // rows
        {
            for (int j=0; j<triangle[i].size(); j++) // elements
            {
				// boundary conditions
                if (j==0) triangle[i][j] += triangle[i-1][j];
                else if (j==triangle[i].size()-1) triangle[i][j] += triangle[i-1][j-1];
                else triangle[i][j] += min(triangle[i-1][j], triangle[i-1][j-1]);
            }
        }
		// get min sum from last row
        int minPath=triangle[triangle.size()-1][0];
        for (int j=1; j<triangle[triangle.size()-1].size(); j++)
            if (triangle[triangle.size()-1][j] < minPath)
                minPath = triangle[triangle.size()-1][j];
        return minPath;
    }
};
