class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin(), S.end());
        int n=pow(2,S.size())-1;
        vector<vector<int> > nSubsets;
        nSubsets.push_back(vector<int>());
        while(n){
            int x=n;
            vector<int> v;
            int digit=0;
            while(x){
                if (x&1)
                    v.push_back(S[digit]);
                digit++;
                x >>= 1;
            }
            nSubsets.push_back(v);
            n-=1;
        }
        return nSubsets;
    }
};
