vector<int> leaders(int a[], int n)
    {
        vector<int> res;
        int i,Max=a[n-1];
        for(i=n-2; i>=0; i--)
        {
            if(a[i] >= Max)
            {
                Max = max(Max, a[i]);
                res.push_back(Max);
            }
        }
       reverse(res.begin(), res.end());
       res.push_back(a[n-1]);
       return res;
        
    }