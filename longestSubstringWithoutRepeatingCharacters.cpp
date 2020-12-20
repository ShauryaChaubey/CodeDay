class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        if(s.length() == 0)
            return 0;
        map<char, int>maps;
        maps[s[0]]++;
        int j=0,i=0,Max=1;
        while(j < s.length()-1)
        {
            if(maps[s[j+1]] == 0)
            {
                j++;
                maps[s[j]]++;
                Max = max((j-i+1), Max);
            }
            else
            {
                maps[s[i]] = 0;
                i++;
            }
        }
        return Max;
        
    }
};