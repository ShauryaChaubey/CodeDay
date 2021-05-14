long long int maximizeSum(long long int a[], int n, int k)
    {
        long long int Min = INT_MAX,sum=0;
        bool flg = false;
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i] < 0 && k > 0)
            {
                a[i] = a[i]*(-1);
                flg = true;
                k--;
            }
            if(a[i] == 0)
              Min = 0;
            else
              Min = min(Min, a[i]);
        }
        for(int i=0; i<n; i++)
          sum += a[i];
        if(k == 0 || k%2 == 0 || Min == 0)
           return sum;
        return (sum-(2*Min));
    }