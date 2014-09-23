class Solution {
public:
    string convert(string s, int nRows)
    {
        if (nRows == 1)
            return s;
            
        vector<string> parts;
        for (int i=0; i<nRows; i++)
            parts.push_back("");
        int i=0, row=0;
        bool down=true;
        while (i < s.size())
        {
            parts[row] += s[i];
            i++;
            if (row == nRows-1)
                down = false;
            if (row == 0)
                down = true;
            if (down) row++;
            else row--;
        }
        string res="";
        for (int i=0; i<parts.size(); i++)
            res += parts[i];
        return res;
    }
};
