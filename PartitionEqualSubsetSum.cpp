int equalPartition(int N, int arr[])
    {
        int sum = accumulate(arr, arr+N, 0);
        if(sum%2 != 0)
          return 0;
        int m = sum/2;
        bool a[N+1][m+1];
        for(int i=0; i<=m; i++)
           a[0][i] = false;
        for(int i=0; i<=N; i++)
           a[i][0] = true;
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(j >= arr[i-1])
                   a[i][j] = a[i-1][j] || a[i-1][j-arr[i-1]];
                else
                   a[i][j] = a[i-1][j];
            }
        }
        if(a[N][m] == false)
           return 0;
        else
           return 1;
    }