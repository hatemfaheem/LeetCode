class Solution {
public:
    string convert(string s, int nRows)
    {
        if (nRows == 1)
            return s;
            
        int * rows = new int[s.size()];
        for (int i=0; i<s.size(); i++)
            rows[i] = -1;
        int i=0, row=0;
        bool down=true;
        while (i < s.size())
        {
            rows[i] = row;
            i++;
            if (row == nRows-1)
                down = false;
            if (row == 0)
                down = true;
            if (down) row++;
            else row--;
        }
        string res="";
        for (int r=0; r<nRows; r++)
            for (int i=0; i<s.size(); i++)
                if (rows[i] == r)
                    res += s[i];
        return res;
    }
};
