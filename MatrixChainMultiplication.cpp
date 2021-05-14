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