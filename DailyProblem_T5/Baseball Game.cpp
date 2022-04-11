int calPoints(vector<string>& ops) 
    {
        stack<int> st;
        for(int i=0; i<ops.size(); i++)
        {
            if(ops[i] != "C" && ops[i] != "D" && ops[i] != "+")
            {
                st.push((stoi)(ops[i]));
            }
            else if(ops[i] == "D")
            {
                st.push((st.top())*2);
            }
            else if(ops[i] == "C")
            {
                st.pop();
            }
            else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a+b);
            }
            
        }
        int sum=0;
        while(!st.empty())
        {
            sum += st.top();
            st.pop();
        }
        return sum;
    }