int Maximize(int a[],int n)
    {
        sort(a, a+n);
        long long int sum=0, M=1000000007, i=0;
        for(i=0; i<n; i++)
        {
            sum += ((a[i]*i)%M);
            sum %= M;
        }
           
        return sum%M;
    }