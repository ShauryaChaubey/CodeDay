bool areOccurrencesEqual(string s)
    {
        vector<char> v(27, 0);
        for(int i=0; i<s.size(); i++)
        {
            v[s[i]-'a']++;
        }
        int temp=v[s[0] - 'a'];
         
        for(int j=0; j<26; j++)
        {
            if(v[j] > 0 && v[j] != temp) return false;
        }
        return true;
    }