#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n)
    {
		int result = 0;
        for (unsigned int i=0; i<n; i++)
	        	result ^= A[i];
        return result;
    }
};

int main()
{
	int n=10;
	int A[] = {3,3,3,7,7,7,4,4,4,10};
	Solution s;
	cout << s.singleNumber(A, n) << "\n";
	cout << (A[0]^A[0]^A[0]) << "\n";
	return 0;
}
