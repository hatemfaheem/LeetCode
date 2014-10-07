class Solution {
public:
    void generate(vector<int> &S, vector<vector<int> > & nSubsets, vector<int> currentSubset, int index)
    {
        if (index == S.size()){
            nSubsets.push_back(currentSubset);
            return;
        }
        generate(S, nSubsets, currentSubset, index+1);
        currentSubset.push_back(S[index]);
        generate(S, nSubsets, currentSubset, index+1);
    }
    
    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin(), S.end());
        vector<vector<int> > nSubsets;
        vector<int> set;
        generate(S, nSubsets, set, 0);
        return nSubsets;
    }
};
