class Solution {
public:
    string convert(string s, int nRows)
    {
        if (nRows == 1)
            return s;
        string res="";
        for (int row=0; row<nRows; row++)
        {
            bool down=true;
            for (int i=row; i<s.size(); )
            {
                res += s[i];
                if (row == 0 || row == nRows-1)
                    i += 2*(nRows-1);
                else
                {
                    i += (down)?(2*(nRows-row-1)):(2*row);
                   down = !down;
                }
            }
        }
        return res;
    }
};
