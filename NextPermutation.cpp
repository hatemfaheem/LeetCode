class Solution {
public:
    void nextPermutation(vector<int> &num)
    {
        int k=num.size()-2;
        int j=num.size()-1;
        while(k>=0 && num[k]>=num[k+1]) k--;
        while(j>k && num[k]>=num[j]) j--;
        swap(num[k], num[j]);
        for (int a=k+1, b=num.size()-1; a<b; a++, b--)
            swap(num[a], num[b]);
    }
};
