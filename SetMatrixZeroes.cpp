class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix)
    {
        vector<vector<int> > tmpMatrix = matrix;
        for (int i=0; i<tmpMatrix.size(); i++)
            for (int j=0; j<tmpMatrix[i].size(); j++)
                if (tmpMatrix[i][j] == 0)
                {
                    for (int k=0; k<matrix.size(); k++) matrix[k][j] = 0;
                    for (int k=0; k<matrix[i].size(); k++) matrix[i][k] = 0;
                }
    }
};
