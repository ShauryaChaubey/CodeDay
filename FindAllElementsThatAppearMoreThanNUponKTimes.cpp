int countOccurence(int arr[], int n, int k) 
    {
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            if(mp.find(arr[i]) == mp.end()) 
              mp.insert({arr[i], 1});
            else
              mp[arr[i]]++;
        }
        int count=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second > n/k)
              count++;
        }
        return count;
    }