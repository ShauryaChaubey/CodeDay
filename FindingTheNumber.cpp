class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        //unordered_map<int, int>map;
        int k=0;
        vector<int> arr(2);
        sort(nums.begin(), nums.end());
            
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != nums[i-1] && nums[i] != nums[i+1])
            {
                arr[k] = nums[i];
                k++;
            }
        }
        return arr;
    }
};