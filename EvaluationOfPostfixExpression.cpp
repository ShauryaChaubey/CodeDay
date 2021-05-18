 int evaluatePostfix(string S)
    {
        stack<int> st;
        int i=0;
        while(i<S.size())
        {
            if(S[i] == '*' || S[i] == '/' || S[i] == '+' || S[i] == '-')
            {
                int m = st.top();
                st.pop();
                int n = st.top();
                st.pop();
                if(S[i] == '*')
                  st.push(m*n);
                else if(S[i] == '/')
                  st.push(n/m);
                else if(S[i] == '+')
                  st.push(m+n);
                else
                  st.push(n-m);
            }
            else
               st.push(S[i]-'0');
            i++;
        }
        return st.top();
    }