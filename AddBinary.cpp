/*
 * AddBinary.cpp
 *
 *  Created on: Aug 30, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b)
    {
    	for (unsigned int i=0; i<a.size()-b.size(); i++)
    		b = '0' + b;
    	for (unsigned int i=0; i<b.size()-a.size(); i++)
    		a = '0' + a;
    	string res="";
    	char rem='0';
    	for (unsigned int i=a.size()-1; i>=0; i--)
    	{
    		int dig = (a[i]-'0')+(b[i]-'0')+(rem-'0');
    		res = ((dig/2) + '0') + res;
    		rem = ((dig%2)+'0');
    	}
    }
};


