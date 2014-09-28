class Solution {
public:
    bool validRow(vector<vector<char> > &board, int row)
    {
        int v[9];
        for (int i=0; i<9; i++)
            v[i]=0;
        for (int i=0; i<9; i++)
            if (board[row][i] >= '1' && board[row][i] <= '9')
                v[board[row][i]-'1']+=1;
        for (int i=0; i<9; i++)
            if (v[i] >= 2)
                return false;
        return true;
    }
    
    bool validCol(vector<vector<char> > &board, int col)
    {
        int v[9];
        for (int i=0; i<9; i++)
            v[i]=0;
        for (int i=0; i<9; i++)
            if (board[i][col] >= '1' && board[i][col] <= '9')
                v[board[i][col]-'1']+=1;
        for (int i=0; i<9; i++)
            if (v[i] >= 2)
                return false;
        return true;
    }
    
    bool validBlock(vector<vector<char> > &board, int b)
    {
        int v[9];
        for (int i=0; i<9; i++)
            v[i]=0;
        int si=(b/3)*3, sj=(b%3)*3, ei=((b/3)*3)+2, ej=((b%3)*3)+2;
        for (int i=si; i<=ei; i++)
            for (int j=sj; j<=ej; j++)
                if (board[i][j] >= '1' && board[i][j] <= '9')
                    v[board[i][j]-'1']+=1;
        for (int i=0; i<9; i++)
            if (v[i] >= 2)
                return false;
        return true;
    }
    
    bool isValidSudoku(vector<vector<char> > &board)
    {
        bool res = true;
        for (int i=0; i<9; i++){
            res &= validRow(board, i);
            res &= validCol(board, i);
            res &= validBlock(board, i);
        }
        return res;
    }
};
