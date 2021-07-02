//using DP

bool isSubsequence(string s, string t) 
    {
        int n = t.size(); 
        int m = s.size();
        int dp[n+1][m+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else if(t[i-1] == s[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        if(dp[n][m] == m) return true;
        return false;
    }

//using 2-pointer approch

bool isSubsequence(string s, string t) 
    {
       //int m=s.length(), n=t.length();
       int a=0,b=0;
        while(a<s.size() && b<t.size())
        {
            if(s[a] == t[b])
                a++;
            b++;
        }
        if(a == s.size()) return true;
        return false;
    }