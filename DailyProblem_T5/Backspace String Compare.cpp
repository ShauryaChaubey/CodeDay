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

    //stack based approch
    bool backspaceCompare(string s, string t) 
    {
        stack<char> st;
        string a="",b="";
        for(int i=0; i<s.size(); i++)
        {
            if(!st.empty() && s[i] == '#') st.pop();
            else if(s[i] != '#')st.push(s[i]);
        }
        while(!st.empty())
        {
           a += st.top();
           st.pop();
        }
        for(int i=0; i<t.size(); i++)
        {
            if(!st.empty() && t[i] == '#') st.pop();
            else if(t[i] != '#') st.push(t[i]);
        }
        while(!st.empty())
        {
           b += st.top();
           st.pop();
        }
        if(a == b) return true;
        return false;
    }