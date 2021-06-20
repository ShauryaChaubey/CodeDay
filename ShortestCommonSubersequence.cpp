int shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i == 0 || j == 0)
                  dp[i][j] = 0;
                else if(X[i-1] == Y[j-1])
                  dp[i][j] = dp[i-1][j-1]+1;
                else
                  dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                  
            }
        }
        return ((m+n)-dp[m][n]);
    }

    //ORint shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        int dp[m+1][n+1], Min=INT_MAX;
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i == 0)
                  dp[i][j] = j;
                else if(j == 0)
                  dp[i][j] = i;
                else if(X[i-1] == Y[j-1])
                  dp[i][j] = dp[i-1][j-1]+1;
                else
                {
                    dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1]);
                    //Min = min(dp[i][j], Min);
                }
                  
                  
            }
        }
        return dp[m][n];
    }

