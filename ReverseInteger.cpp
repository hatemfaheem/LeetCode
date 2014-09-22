/*
 * ReverseInteger.cpp
 *
 *  Created on: Aug 26, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    int reverse(int x) {
    	bool sign=false;
    	if (x<0){
    		x *= -1;
    		sign = true;
    	}
    	int result = 0;
    	while (x){
    		result += x % 10;
    		result *= 10;
    		x /= 10;
    	}
    	result /= 10;
    	if (sign)
    		result *= -1;
    	return result;
    }
};


