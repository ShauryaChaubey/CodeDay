//binary search is the best approch to solve such problems
//count the numbers appearing from any one element, if count is greater than the actual no., there might be a repeatation
//now check the smaller no., if the same case then keep going lower and find the lowest number having greater count than the no. itself. 


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