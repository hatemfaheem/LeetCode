class Solution {
public:
    void generate(vector<int> &S, vector<vector<int> > & combinations, vector<int> currentComb, int index, int k)
    {
        if (currentComb.size() == k){
            combinations.push_back(currentComb);
            return;
        }
        if (index == S.size())
            return;
        generate(S, combinations, currentComb, index+1, k);
        currentComb.push_back(S[index]);
        generate(S, combinations, currentComb, index+1, k);
    }
    vector<vector<int> > combine(int n, int k)
    {
        vector<int> S;
        for (int i=1; i<=n; i++)
            S.push_back(i);
        vector<vector<int> > combinations;
        vector<int> comb;
        generate(S, combinations, comb, 0, k);
        return combinations;
    }
};
