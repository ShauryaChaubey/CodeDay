vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
                auto it = mp.find(target-nums[i]);
                res.push_back(it->second);
                res.push_back(i);
                break;
            }
            else
            {
                mp.insert({nums[i], i});
            }
        }
        return res;
        
    }