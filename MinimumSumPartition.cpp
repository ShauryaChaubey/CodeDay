int subsetSum(int arr[], int n, int sum)
    {
        bool dp[n+1][sum+1];
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = true;
        }
        for(int i=1; i<=sum; i++)
        {
            dp[0][i] = false;
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            {
               if(arr[i-1] <= j)
                 dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
               else
                 dp[i][j] = dp[i-1][j];
            }
        }
        int minDiff = INT_MAX;
        for(int i=1; i<=sum; i++)
        {
            if(dp[n][i])
              minDiff = min(minDiff, (sum*2)-(2*i));
        }
        return minDiff;
    }
	int minDifference(int arr[], int n)  
	{ 
	    if(n == 1) return arr[0];
	    int sum = accumulate(arr, arr+n, 0);
	    return subsetSum(arr, n, sum/2);
	} 