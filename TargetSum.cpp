int findTargetSumWays(vector<int>& nums, int target) 
    {
        int n=nums.size();
        
        int sum = 0;
        for(int i=0; i<n; i++) sum += nums[i];
        if(sum < target || (-1)*sum > target) return 0;
        if((sum + target) % 2 != 0) return 0;
        
        int S = (sum+target)/2;
        int dp[n+1][S+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=S; j++)
            {
                if(i == 0 && j == 0) dp[i][j] = 1;
                else if(i == 0) dp[i][j] = 0;
                else if(nums[i-1] <= j)
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][S];
    }