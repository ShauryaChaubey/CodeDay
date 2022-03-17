string minRemoveToMakeValid(string s) 
    {
        string str;
        stack<char> st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
                str += '(';
            }
            else if(!st.empty() && s[i] == ')') 
            {
                st.pop();
                str += ')';
            }
            else if(s[i] != '(' && s[i] != ')') str += s[i];
        }
        if(!st.empty())
        {
            string temp=str;
            str = "";
            int i=temp.size()-1;
            while(!st.empty() && i>=0)
            {
                if(!st.empty() && temp[i] == '(')
                {
                    st.pop();
                }
                else if(temp[i] != '(') str += temp[i];
                i--;
            }
            cout << str << " ";
            while(i >= 0)
            {
                str += temp[i];
                i--;
            }
            reverse(str.begin(), str.end());
        }
        return str;
    }