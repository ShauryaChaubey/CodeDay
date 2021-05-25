string secFrequent (string arr[], int n)
    {
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++)
           mp[arr[i]]++;
        vector<int> v;
        for(auto itr:mp)
        {
            v.push_back(itr.second);
        }
        sort(v.begin(), v.end());
        int count = v[v.size()-2];
        string s;
        for(auto itr:mp)
        {
            if(count == itr.second)
              s = itr.first;
        }
        return s;
    }