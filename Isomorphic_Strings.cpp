bool areIsomorphic(string str1, string str2)
    {
        if(str1.size() != str2.size())
           return false;
        int mp1[MAX_CHARS] = {0}, mp2[MAX_CHARS] = {0};
        for(int i=0; i<str2.size(); i++)
        {
            mp1[str1[i]]++;
            mp2[str2[i]]++;
            if(mp1[str1[i]] != mp2[str2[i]])
               return false;
        }
        return true;
    }