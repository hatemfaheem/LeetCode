/*
 * DecodeWays.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

class Solution {
    int * memo;
    string s;
public:
    int decodings(int start)
    {
    	if (s[start] == '0')
    		return 0;
    	if (start >= s.size()-1)
    		return 1;
    	if (memo[start] != -1) return memo[start];
    	int n = (s[start]-'0')*10 + (s[start+1]-'0');
    	int d = decodings(start+1);
    	if (n<=26)
    		d += decodings(start+2);
    	return (memo[start] = d);
    }

    int numDecodings(string s) {
        memo = new int[s.size()];
		for (int i=0; i<s.size(); i++)
			memo[i] = -1;
		this->s = s;
		return decodings(0);
    }
};
