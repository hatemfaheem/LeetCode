#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n)
    {
        int result=0;
        for (int d=31; d>=0; d--){
            int digitSum = 0;
            for (int i=0; i<n; i++)
                digitSum += ((A[i] >> d) & 1);
            result <<= 1;
            result |= (digitSum%3!=0);
        }
        return result;
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
