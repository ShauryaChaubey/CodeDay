string removeDuplicates(string s, int k) 
    {
        if(s.size() < k) return s;
        stack<pair<char, int>> st;
        for(int i=0; i<s.size(); i++)
        {
            if(!st.empty() && st.top().first == s[i])
            {
                st.top().second++;
                if(st.top().second == k) st.pop();
            }
            else
            {
                st.push({s[i], 1});
            }
        }
        s="";
        while(!st.empty())
        {
            int i=st.top().second;
            char c=st.top().first;
            while(i--)
               s += c;
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }