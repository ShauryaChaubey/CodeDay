int scoreOfParentheses(string s) 
    {
        stack<int> st;
        int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push(c);
                c=0;
            }
            else if(s[i] == ')')
            {
                c = st.top()+max(1, 2*c);
                st.pop();
            }
        }
        return c;
    }