int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int i=0, j=nums.size()-1;i<j;)
        {
            if(nums[i]+nums[j] == k)
            {
                ans++;
                ++i;
                --j;
            }
            else if(nums[i]+nums[j] < k) ++i;
            else --j;
        }
        return ans;
    }

    int maxOperations(vector<int>& nums, int k) 
    {
        unordered_map<int, int> mp;
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(k-nums[i]) != mp.end() && mp[k-nums[i]] > 0)
            {
                mp[k-nums[i]]--;
                ans++;
            }
            else
                mp[nums[i]]++;
        }
        return ans;
    }