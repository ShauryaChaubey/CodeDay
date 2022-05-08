//O(n^3)

bool find132pattern(vector<int>& nums) 
    {
        if(nums.size() < 3) return false;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] < nums[j])
                {
                    for(int k=j+1; k<nums.size(); k++)
                    {
                        if(nums[k] > nums[i] && nums[k] < nums[j]) return true;
                    }
                }
            }
        }
        return false;
    




//O(n^2)

bool find132pattern(vector<int>& nums) 
    {
        stack<int> st;
        int Min = INT_MIN;
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i] < Min) return true;
            else 
            {
                while(!st.empty() && nums[i] > st.top())
                {
                    Min = st.top();
                    st.pop();
                }
            }
            st.push(nums[i]);
        }
        return false;
    }