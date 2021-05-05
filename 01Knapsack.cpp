int knapSack(int W, int wt[], int val[], int n) 
    { 
       int dp[n+1][W+1];
       for(int i=0; i<=n; i++)
          dp[i][0] = 0;
        for(int i=0; i<=W; i++)
          dp[0][i] = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=W; j++)
            {
                if(j < wt[i-1])
                   dp[i][j] = dp[i-1][j];
                else
                   dp[i][j] = max(dp[i-1][j], (dp[i-1][j-wt[i-1]] + val[i-1]));
            }
        }
        return dp[n][W];
    }