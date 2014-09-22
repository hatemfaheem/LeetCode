/*
 * ReverseWordsinaString.cpp
 *
 *  Created on: Aug 31, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	void trimExtraSpaces(string & s)
	{
    	for (unsigned int i=1; i<s.size(); i++)
    		if (s[i-1]==' ' && s[i]==' ')
    			s.erase(s.begin()+(i--));
    	if (s.size()>0 && s[0]==' ')
    		s.erase(s.begin());
    	if (s.size()>0 && s[s.size()-1]==' ')
    		s.erase(s.begin()+s.size()-1);
	}

	void reverseString(string & s, int start, int end)
	{
    	for (int i=start, j=end; i<j; i++, j--)
    	{
    		s[i] = s[i] + s[j];
    		s[j] = s[i] - s[j];
    		s[i] = s[i] - s[j];
    	}
	}

	void reverseStringWords(string & s)
	{
		int start=0, i=1;
		for (; i<s.size(); i++)
		{
			if (s[i]==' ')
			{
				this->reverseString(s, start, i-1);
				start = i+1;
			}

			if (i == s.size()-1)
				this->reverseString(s, start, i);
		}
	}

    void reverseWords(string & s)
    {
    	this->trimExtraSpaces(s);
    	this->reverseString(s, 0, s.size()-1);
    	this->reverseStringWords(s);
    }
};

int main()
{
	Solution solution;
	string s = "hatem";
	solution.reverseWords(s);
	cout << "/" << s << "/\n";
	return 0;
}


