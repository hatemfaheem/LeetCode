/*
 * EvaluateReversePolishNotation.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: hatemfaheem
 */

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

class Solution {
public:
	int toInteger(string number)
	{
		istringstream ss(number);
		int n=0;
		ss >> n;
		return n;
	}

	int applyOperator(int a, int b, string op)
	{
		if (op == "+") return a+b;
		if (op == "-") return a-b;
		if (op == "*") return a*b;
		if (op == "/") return a/b;
		return 0;
	}

    int evalRPN(vector<string> &tokens)
    {
    	stack<int> tokensStack;
    	for (int i=0; i<tokens.size(); i++)
    	{
    		if (tokens[i]=="+" || tokens[i]=="-" ||
    				tokens[i]=="*" || tokens[i]=="/")
    		{
    			int b = tokensStack.top();
    			tokensStack.pop();
    			int a = tokensStack.top();
    			tokensStack.pop();
    			tokensStack.push(applyOperator(a, b, tokens[i]));
    		}
    		else
    			tokensStack.push(toInteger(tokens[i]));
    	}
    	return tokensStack.top();
    }
};


int main()
{
	Solution sol;
	cout << sol.toInteger("12") + sol.toInteger("6") << "\n";
	return 0;
}

