int isPrime(int N)
    {
        if(N == 1)
          return 0;
        if(N == 2)
          return 1;
        for(int i=2; i<=sqrt(N); i++)
        {
            if(N%i == 0)
               return 0;
        }
        return 1;
    }