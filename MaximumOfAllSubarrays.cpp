vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> res;
        multiset<int, greater<int>> st;
        for(int i=0; i<k; i++)
           st.insert(arr[i]);
        res.push_back(*st.begin());
        for(int i=1; i<=n-k; i++)
        {
            st.erase(st.find(arr[i-1]));
            st.insert(arr[i+k-1]);
            res.push_back(*st.begin());
        }
        return res;
    }