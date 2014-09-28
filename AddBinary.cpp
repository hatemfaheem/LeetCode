/*
 * AddBinary.cpp
 *
 *  Created on: Aug 30, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    string addBinary(string a, string b)
    {
        string res=""; char rem='0';
        for (int i=a.size()-1, j=b.size()-1; i>=0 || j>=0; i--, j--)
        {
            char ai = ((i>=0)?(a[i]):('0')), bj = ((j>=0)?(b[j]):('0'));
            int ax=ai-'0', bx=bj-'0', rx=rem-'0';
            res = (char)((ax^bx^rx)+'0') + res;
            rem = ((ax==1)?(bx|rx):(bx&rx))+'0';
        }
        return (rem=='1')?('1'+res):(res);
    }
};

