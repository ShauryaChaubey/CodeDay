int dp[202][202];
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int solve(int e, int f)
    {
        if(f == 0 || f == 1 || e == 1) return f;
        if(dp[e][f] != -1) return dp[e][f];
        int ans = INT_MAX;
        for(int k=1; k<=f; k++)
        {
            int temp = 1+max(solve(e-1, k-1), solve(e, f-k));
            ans = min(ans, temp);
        }
        return dp[e][f] = ans;
    }
    int eggDrop(int n, int k) 
    {
        memset(dp, -1, sizeof(dp));
        return solve(n, k);
    }