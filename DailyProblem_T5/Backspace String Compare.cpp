bool backspaceCompare(string s, string t) 
    {
        string a="", b="";
        int j=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != '#')
            {
                a += s[i];
                j++;
            }
            else if(s[i] == '#' && a.size()>0)
            {
                if(a.size() == 1) a.erase();
                else
                  a.erase(a.begin()+j-1);
                j--;
            }
        }
        j=0;
        for(int i=0; i<t.size(); i++)
        {
            if(t[i] != '#')
            {
                b += t[i];
                j++;
            }
            else if(t[i] == '#' && b.size()>0)
            {
                if(b.size() == 1) b.erase();
                else
                  b.erase(b.begin()+j-1);
                j--;
            }
        }
        return a==b?1:0;
    }