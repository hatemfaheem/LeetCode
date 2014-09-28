class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int start=0, currentMax=0, currentLength=0;
        for (int i=0; i<s.size(); i++)
        {
            int j=i-1;
            for (; j>=start && s[j]!=s[i]; j--);
            if (j<start)
                currentLength += 1;
            else{
                currentMax = max(currentMax, currentLength);
                start = j+1;
                currentLength = i-j;
            }
        }
        currentMax = max(currentMax, currentLength);
        return currentMax;
    }
};
