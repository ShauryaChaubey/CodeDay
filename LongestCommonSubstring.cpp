int static dp[1001][1001];
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int dp[n+1][m+1],Max=0;
        if(n == 0 || m == 0)
           return 0;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else if(S1[i-1] == S2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                    Max = max(Max, dp[i][j]);
                }
                else
                   dp[i][j] = 0;
            }
        }
        return Max;
    }