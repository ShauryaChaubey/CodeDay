bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        stack<int> st;
        int i=0, j=0;
        while(i < pushed.size() || j<popped.size())
        {
            if(st.empty() && i<pushed.size())
            {
                st.push(pushed[i]);
                i++;
            }
            else if(i<pushed.size() && st.top() != popped[j])
            {
                st.push(pushed[i]);
                i++;
            }
            else if(j<popped.size() && st.top() == popped[j])
            {
                st.pop();
                j++;
            }
            else break;
        }
        if(!st.empty()) return false;
        return true;
    }