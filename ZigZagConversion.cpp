class Solution {
public:
    string convert(string s, int nRows)
    {
        if (nRows == 1)
            return s;
        string res="";
        for (int row=0; row<nRows; row++)
        {
            int inc = 2*(nRows-2)+2;
            int upInc = 2, dnInc = 2;
            for (int j=row-1; j>0; j--)
                upInc += 2;
            for (int j=row+1; j<nRows-1; j++)
                dnInc += 2;
                
            bool down=true;
            for (int i=row; i<s.size(); )
            {
                res += s[i];
                if (row == 0 || row == nRows-1)
                    i += inc;
                else{
                    i += (down)?(dnInc):(upInc);
                   down = !down;
                }
            }
        }
        return res;
    }
};
