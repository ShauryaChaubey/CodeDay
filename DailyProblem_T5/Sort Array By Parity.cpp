vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int i=0,j=nums.size()-1;
        while(i<j)
        {
             if(nums[j]%2 == 0)
             {
                 swap(nums[i], nums[j]);
                 i++;
             }
            else j--;
        }
        return nums;
    }