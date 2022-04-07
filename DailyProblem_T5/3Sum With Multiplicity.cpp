int threeSumMulti(vector<int>& arr, int target) 
    {
        //sort(arr.begin(), arr.end());
        unordered_map<int, int> mp;
        int ans=0;
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                int k = target-(arr[i]+arr[j]);
                if(mp.find(k) != mp.end()) ans = (mp[k]+ans) %1000000007;
            }
            mp[arr[i]]++;
        }
        return ans%1000000007;
        
    }

    //mp.count() functions in map works same as mp.find()