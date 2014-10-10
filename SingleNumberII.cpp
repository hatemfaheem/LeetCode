class Solution {
public:
    int singleNumber(int A[], int n)
    {
        unordered_map<int,int> counts;
        for (int i=0; i<n; i++)
            if (counts.find(A[i]) != counts.end())
                counts[A[i]] += 1;
            else
                counts[A[i]] = 1;
        for (unordered_map<int,int>::iterator it=counts.begin(); it!=counts.end(); it++)
            if (it->second != 3)
                return it->first;
        return -1;
    }
};
