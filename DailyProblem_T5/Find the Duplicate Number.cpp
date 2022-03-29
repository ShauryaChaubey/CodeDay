int findDuplicate(vector<int>& nums) 
    {
        int l=1, h=nums.size()-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2, c=0;
            for(auto it: nums)
            {
                if(it<=mid) c++;
            }
            if(c <= mid) l = mid+1;
            else h = mid-1;
        }
        
        return l;
    }