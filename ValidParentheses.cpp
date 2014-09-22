/*
 * ValidParentheses.cpp
 *
 *  Created on: Aug 30, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
    	stack<char> ST;
    	for (int i=0; i<s.size(); i++)
    	{
    		if(!ST.empty() &&
    				((s[i]=='}' && ST.top()=='{') ||
    				 (s[i]==']' && ST.top()=='[') ||
       				 (s[i]==')' && ST.top()=='(')))
    		{
    			ST.pop();
    		}
    		else
    			ST.push(s[i]);
    	}
    	return ST.empty();
    }
};

