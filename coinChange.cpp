//tabular method

 long long int count( int S[], int m, int n )
    {
       long long int dp[m+1][n+1],i,j;
       for(i=0;i<=m;i++)
       {
           dp[i][0] = 1;
       }
       for(i=1;i<=n;i++)
       {
           dp[0][i] = 0;
       }
       for(i=1;i<=m;i++)
       {
           for(j=1;j<=n;j++)
           {
               dp[i][j] = dp[i-1][j];
               if(j-S[i-1] >= 0)
                  dp[i][j] += dp[i][j-S[i-1]];
            }
       }
       
       return dp[m][n];
    }

    //Recursive method