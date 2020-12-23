int countSquares(int N) 
    {
        int k = round(sqrt(N));
        if(k*k < N)
           return k;
        else
          return k-1;
    }