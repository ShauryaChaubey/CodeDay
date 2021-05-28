long long nthFaithfulNum(int N) 
    {
        long long binNum[32],i=0;
        long long sum=0;
        while(N > 0)
        {
            int k = N%2;
            if(k == 1)
               sum += pow(7,i);
            i++;
            N /= 2;
        }
        return sum;
        
    }