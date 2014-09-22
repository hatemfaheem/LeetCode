/*
 * PalindromeNumber.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    bool isPalindrome(int x) {
    	if (x<0)
    		return false;
    	int m = 0, n = x;
    	while (n){
    		m *= 10;
    		m += (n%10);
    		n /= 10;
    	}
    	return ((m^x)==0);
    }
};

