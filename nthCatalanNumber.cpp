cpp_int findCatalan(int n) 
    {
        cpp_int dp[n+1];
        //int dp[n+1];
        dp[0] = 1;
        for(int i=1;i<=n;i++)
        {
            dp[i] = (((2*i)*(2*i-1)*dp[i-1])/(i*(i+1)));
        }
        return dp[n];
    }

    //without using formula
    cpp_int findCatalan(int n) 
    {
        cpp_int dp[n+1];
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2; i<=n; i++)
        {
            dp[i] = 0;
            for(int j=0;j<i;j++)
            {
                dp[i] += dp[j]*dp[i-j-1];
            }
        }
        return dp[n];
    }