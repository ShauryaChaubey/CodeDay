void call(vector<int> &arr,  set<vector<int>> &res, int i, vector<int> &st)
    {
        if(i == arr.size())
        {
            res.insert(st);
            return;
        }
        call(arr, res, i+1, st);
        st.push_back(arr[i]);
        //sort(st.begin(), st.end());
        call(arr, res, i+1, st);
        st.pop_back();
    }
    //Function to find all possible unique subsets.
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        sort(arr.begin(),arr.end());
        vector<int> st;
        set<vector<int>>res;
        //res.push_back(st);
        call(arr, res, 0, st);
        //sort(res.begin(), res.end());
        vector<vector<int>> ans;
        for(auto it:res)
           ans.push_back(it);
        return ans;
    }