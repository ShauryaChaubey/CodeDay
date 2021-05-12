vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies, candies+N);
        int minSum=0,maxSum=0,i=0,j=N-1;
        while(i<=j)
        {
            minSum += candies[i];
            j = j-K;
            i++;
        }
        i = N-1;
        j=0;
        while(i >= j)
        {
            maxSum += candies[i];
            j = j+K;
            i--;
        }
        if(K == 0)
           maxSum = minSum;
        vector<int> v;
        v.push_back(minSum);
        v.push_back(maxSum);
        return v;
    }