long long int nthFibonacci(long long int n)
    {
        long long int M = 1000000007;
        if(n == 1 || n == 2)
           return 1;
        long long int dp[n+1],i;
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        for(i=4; i<=n; i++)
           dp[i] = (dp[i-1] + dp[i-2]) % M;
        return dp[n];
    }