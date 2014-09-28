class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int index[256];
        for (int i=0; i<256; i++)
            index[i]=-1;
        int start=0, currentMax=0, currentLength=0;
        for (int i=0; i<s.size(); i++)
        {
            if (index[s[i]]<start)
                currentLength += 1;
            else{
                currentMax = max(currentMax, currentLength);
                start = index[s[i]]+1;
                currentLength = i-index[s[i]];
            }
            index[s[i]]=i;
        }
        currentMax = max(currentMax, currentLength);
        return currentMax;
    }
};
