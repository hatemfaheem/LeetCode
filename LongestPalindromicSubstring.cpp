/*
 * LongestPalindromicSubstring.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
    	if (s.size()<=0) return "";
    	if (s.size()==1) return s;
    	string rev = s;
    	for (int i=0, j=rev.size()-1; i<j; i++, j--){
    		char tmp = rev[i];
    		rev[i] = rev[j];
    		rev[j] = tmp;
    	}
    	int start=0, currentLength=0;
    	int maxStart=0, maxEnd=0, maxLength=-1;
    	for (int i=0; i<s.size(); i++){
    		if (s[i]==rev[i])
    			currentLength += 1;
    		else{
        		if (currentLength > maxLength){
        			maxLength = currentLength;
        			maxStart = start;
        			maxEnd = i-1;
        		}
        		start = i+1;
        		currentLength = 0;
    		}
    	}
		if (currentLength > maxLength){
			maxLength = currentLength;
			maxStart = start;
			maxEnd = s.size()-1;
		}
		cout << maxStart << " " << maxEnd << "\n";
    	return s.substr(maxStart, maxEnd-maxStart+1);
    }
};

int main()
{
	Solution sol;
	cout << sol.longestPalindrome("abb") << "\n";
	return 0;
}
