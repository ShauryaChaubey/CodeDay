int dp[202][202][2];
    int mod=1003;
    int solve(string &S, int i, int j, int check)
    {
        if(i>j)
        {
            return 0;
        }
        if(i == j)
        {
            if(check == 1)
            {
                dp[i][j][1]=S[i]=='T';
            }
            else
            {
                dp[i][j][0]=S[i]=='F';
            }
        }
        
        if(dp[i][j][check] != -1) return dp[i][j][check];
        int ans = 0;
        for(int k=i+1; k<j; k += 2)
        {
            int lt=solve(S, i, k-1, 1);
            int lf=solve(S, i, k-1, 0);
            int rt=solve(S, k+1, j, 1);
            int rf=solve(S, k+1, j, 0);
            if(S[k] == '&')
            {
                if(check == 1)
                {
                    ans += lt*rt;
                }
                else
                {
                    ans += ((lt*rf)+(lf*rt)+(rf*lf));
                }
            }
            else if(S[k] == '|')
            {
                if(check == 1)
                {
                    ans += ((lt*rf)+(lf*rt)+(rt*lt));
                }
                else
                {
                    ans += (rf*lf);
                }
            }
            else
            {
                if(check == 1)
                {
                    ans += ((lt*rf)+(lf*rt));
                }
                else
                {
                    ans += ((rf*lf)+(rt*lt));
                }
            }
        }
        return dp[i][j][check] = ans%mod;
    }
    int countWays(int N, string S)
    {
        memset(dp, -1, sizeof(dp));
        return solve(S, 0, N-1, 1)%mod;
    }