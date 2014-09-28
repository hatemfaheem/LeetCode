class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        bool * setRow = new bool[m];
        bool * setCol = new bool[n];
        for (int i=0; i<m; i++) setRow[i] = false;
        for (int i=0; i<n; i++) setCol[i] = false;
        for (int i=0; i<m; i++)
            for (int j=0; j<n; j++)
                if (matrix[i][j] == 0)
                {
                    setRow[i] = true;
                    setCol[j] = true;
                }
                
        for (int i=0; i<m; i++)
            for (int j=0; setRow[i] && j<n; j++)
                matrix[i][j] = 0;
        for (int j=0; j<n; j++)
            for (int i=0; setCol[j] && i<m; i++)
                matrix[i][j] = 0;
    }
};
