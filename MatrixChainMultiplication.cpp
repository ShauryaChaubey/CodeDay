int matrixMultiplication(int N, int arr[])
    {
        int dp[N+1][N+1];
        for(int i=0; i<N; i++)
          dp[i][i] = 0;
        for(int l=2; l<N; l++)
        {
            for(int i=1; i<N-l+1; i++)
            {
                int j=i+l-1;
                dp[i][j] = INT_MAX;
                for(int k=i; k<=j-1; k++)
                {
                    int temp = dp[i][k] + dp[k+1][j] + (arr[i-1]*arr[j]*arr[k]);
                    if(temp < dp[i][j])
                      dp[i][j] = temp;
                }
                
            }
        }
        return dp[1][N-1];
    }

    //top-down
    int dp[101][101];
    int solve(int arr[], int i, int j)
    {
        if(i >= j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        long long ans = INT_MAX;
        for(int k=i; k<=j-1; k++)
        {
            long long temp = solve(arr, i, k) + solve(arr, k+1, j) + (arr[i-1]*arr[k]*arr[j]);
            if(ans > temp) ans = temp;
        }
        
        return dp[i][j] = ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp, -1, sizeof(dp));
        return solve(arr, 1, N-1);
    }