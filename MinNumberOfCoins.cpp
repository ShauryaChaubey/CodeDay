	int minCoins(int coins[], int M, int V) 
	{ 
	    int dp[M+1][V+1];
	    for(int i=0; i<=M; i++)
	    {
	        for(int j=0; j<=V; j++)
	        {
	            if(i == 0 && j == 0)
	              dp[i][j] = INT_MAX-1;
	            else if(i == 0) 
	              dp[i][j] = 0;
	            else if(i == 1)
	            {
	                if(j%coins[i-1] == 0)
	                  dp[i][j] = j/coins[i-1];
	                else
	                  dp[i][j] = INT_MAX-1;
	            }
	            else if(coins[i-1] <= j)
	               dp[i][j] = min(dp[i-1][j], dp[i][j-coins[i-1]]+1);
	            else
	               dp[i][j] = dp[i-1][j];
	        }
	    }
	    if(dp[M][V] != INT_MAX-1) return dp[M][V];
	    return -1;
	} 