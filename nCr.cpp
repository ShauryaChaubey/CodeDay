//Time complexity: O(n*n)
//Space complexity: O(n)

const unsigned int M = 1000000007;
    int nCr(int n, int r)
    {
        int dp[n+1][r+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=r; j++)
            {
                if(j == 0)
                  dp[i][j] = 1;
                else if(i == 0)
                  dp[i][j] = 0;
                else 
                  dp[i][j] = (dp[i-1][j]%M + dp[i-1][j-1]%M) % M;
            }
        }
        return dp[n][r];
    }


//Time complexity: O(n*r)
//Space complexity: O(n)

int nCr(int n, int r)
    {
        int M = 1000000007;
        if(r > n)
          return 0;
        int dp[n+1][r+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=min(i, r); j++)
            {
                if(j == 0 || j == i)
                  dp[i][j] = 1;
                else 
                  dp[i][j] = (dp[i-1][j]%M + dp[i-1][j-1]%M) % M;
            }
        }
        return dp[n][r];
    }

//Time complexity: O(n*r)
//Space complexity: O(r)

int nCr(int n, int r)
    {
        int M = 1000000007;
        if(r > n)
          return 0;
        if(n-r < r)
          r = n-r;
        int dp[r+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int i=1; i<=n; i++)
        {
            for(int j=min(r, i); j>0; j--)
            {
                if(j == 0 || j == i)
                  dp[j] = 1;
                else 
                  dp[j] = (dp[j]%M + dp[j-1]%M) % M;
            }
        }
        return dp[r];
    }