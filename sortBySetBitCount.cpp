void sortBySetBitCount(int arr[], int n)
    {
        multimap<int, int, greater<int>> mp;
        for(int i=0;i<n;i++)
        {
            int count=0,j=arr[i];
            while(j)
            {
                count += j & 1;
                j >>= 1;
            }
            mp.insert(make_pair(count,arr[i]));
        }
        int i=0;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            int j = itr->second;
            arr[i] = j;
            i++;
        }
    }