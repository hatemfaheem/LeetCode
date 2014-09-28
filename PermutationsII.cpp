#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

	bool nextPermutation(vector<int> & num)
	{
        int k=num.size()-2;
        int j=num.size()-1;
        while(k>=0 && num[k]>=num[k+1]) k--;
        if (k<0) return false;
        while(j>k && num[k]>=num[j]) j--;
        swap(num[k], num[j]);
        for (int a=k+1, b=num.size()-1; a<b; a++, b--)
            swap(num[a], num[b]);
        return true;
	}

    vector<vector<int> > permuteUnique(vector<int> &num)
    {
        sort(num.begin(), num.end());
        vector<vector<int> > permutations;
        do{
        		permutations.push_back(num);
        }while(nextPermutation(num));
        return permutations;   
    }
};

void printVectors(vector<vector<int> > perms){
	for (int i=0; i<perms.size(); i++){
		for (int j=0; j<perms[i].size(); j++)
			cout << perms[i][j] << ", ";
		cout << "\n";
	}
}

int main()
{
	Solution s;
	int arr[]={1,1,2,2};
	vector<int> v(arr, arr+4);
	vector<vector<int> > res = s.permuteUnique(v);
	printVectors(res);
	return 0;
}
