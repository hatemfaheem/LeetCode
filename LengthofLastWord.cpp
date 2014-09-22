/*
 * LengthofLastWord.cpp
 *
 *  Created on: Aug 29, 2014
 *      Author: hatemfaheem
 */

class Solution {
public:
    int lengthOfLastWord(const char *s) {
    	int currentLength=0;
    	bool space=false;
    	for (int i=0; s[i] != '\0'; i++){
    		if (s[i] == ' ')
    			space = true;
    		else{
    			if (space){
    				currentLength = 1;
    				space = false;
    			}
    			else
    				currentLength++;
    		}
    	}
    	return currentLength;
    }
};
