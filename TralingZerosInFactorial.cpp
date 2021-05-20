int trailingZeroes(int N)
    {
        int p=5;
        int ans=0;
        while(N/p > 0)
        {
            ans += (N/p);
            p *= 5;
        }
        return ans;
    }