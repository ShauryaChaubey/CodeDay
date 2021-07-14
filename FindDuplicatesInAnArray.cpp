//O(nlogn)
vector<int> duplicates(int arr[], int n) 
    {
        unordered_map<int, int> mp;
        vector<int> v;
        bool f=false;
        for(int i=0; i<n; i++)
        {
            if(mp.find(arr[i]) == mp.end())
              mp.insert({arr[i], 1});
            else
             mp[arr[i]]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second > 1)
            {
                f = true;
                v.push_back(it->first);
            }
        }
        if(!f) v.push_back(-1);
        sort(v.begin(), v.end());
        return v;
    }
//O(n)
vector<int> duplicates(int arr[], int n) 
    {
        int t[n+1];
        memset(t, 0, sizeof(t));
        bool flg = false;
        vector<int> v;
        bool f=false;
        for(int i=0; i<n; i++)
        {
            t[arr[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(t[i] > 1)
            {
                v.push_back(i);
                flg = true;
            }
        }
        if(!flg) v.push_back(-1);
        return v;
    }