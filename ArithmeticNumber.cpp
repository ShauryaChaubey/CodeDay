int inSequence(int A, int B, int C)
    {
        if(A == B)
          return 1;
        double k = ((double)(B-A)/C)+1;
        if(k == int(k) && k>0)
          return 1;
        return 0;
    }