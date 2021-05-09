vector<ll> nthRowOfPascalTriangle(int n) 
    {
        ll pas[n+1][n+1],i,j;
        long long int M = 1000000007;
        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(j == 0 || j == i)
                   pas[i][j] = 1;
                else
                {
                    pas[i][j] = (pas[i-1][j] + pas[i-1][j-1]) % M;
                }
                   
            }
        }
        vector<ll> res;
        for(j=0; j<n; j++)
        {
            int temp = pas[i-1][j];
            res.push_back(temp);
        }
        return res;
    }