class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        bool firstRowZero=false, firstColZero=false;
        for (int i=0; i<m; i++)
            for (int j=0; j<n; j++)
                if (matrix[i][j] == 0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    firstRowZero |= (i==0);
                    firstColZero |= (j==0);
                }
                
        for (int i=1; i<m; i++)
            for (int j=1; (matrix[i][0]==0) && j<n; j++)
                matrix[i][j] = 0;
        for (int j=1; j<n; j++)
            for (int i=1; (matrix[0][j]==0) && i<m; i++)
                matrix[i][j] = 0;
        for (int i=0; firstColZero && i<m; i++)
            matrix[i][0] = 0;
        for (int j=0; firstRowZero && j<n; j++)
            matrix[0][j] = 0;
    }
};
