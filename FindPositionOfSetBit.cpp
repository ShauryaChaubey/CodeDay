int findPosition(int N) 
    {
        if(N == 0)
          return -1;
        int k=0,c=0,i=1;
        while(N != 0)
        {
            if(N%2 == 1)
            {
                c++;
                k = i;
            }
            N = N/2;
            i++;
            if(c > 1)
              return -1;
        }
        return k;
    }