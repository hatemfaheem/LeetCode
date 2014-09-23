class Solution {
public:
    char resolve(char c)
    {
        if (c>='A' && c<='Z')
            return (c - 'A' + 'a');
        if (c>='a' && c<='z')
            return c;
        if (c>='0' && c<='9')
            return c;
        return ' ';
    }
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j)
        {
            s[i] = resolve(s[i]);
            s[j] = resolve(s[j]);
            if (s[i] != ' ' && s[j] != ' '){
                if (s[i] != s[j])
                    return false;
                else
                    i++, j--;
            }
            if (s[i] == ' ') i++;
            if (s[j] == ' ') j--;
        }
        return true;
    }
};
