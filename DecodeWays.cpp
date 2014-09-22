/*
 * DecodeWays.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

#include <string>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
    	if (s.size() == 1)
    		return 0;
    	else if (s.size() == 1)
    		return 1;
    	else{
    		if (s[0]=='1')
    			return 2;
    		else if (s[0]=='2'){
    			if (s[1]>='0'&&s[1]<='6')
    				return 2;
    			else
    				return 1;
    		}
    		else
    			return 1;
    	}
    }
};

int main()
{
	return 0;
}
