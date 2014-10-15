#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n)
    {
        int digits[32]; // digits sum
        for (int d=0; d<32; d++)
            digits[d]=0;
        for (int d=0; d<32; d++)
            for (int i=0; i<n; i++)
                digits[d] += ((A[i] >> d) & 1);
        int  result = 0;
        for (int d=31; d>=0; d--){
			result <<= 1;
            result |= (digits[d]%3!=0);
		}
        return (result);
    }
};

// print binary representation for debugging
void binary(int x)
{
	for (int i=31; i>=0; i--)
		cout << ((x>>i)&1);
	cout << "\n";
}

int main()
{
	int A[] = {-1/*2147483647*/,-2,-2,-2,-3,-3,-3}; // sample test case
	Solution s;
	cout << s.singleNumber2(A, 7) << "\n";
	return 0;
}
