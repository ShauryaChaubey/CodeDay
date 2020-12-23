int middle(int A, int B, int C)
    {
        int Max = max(A, B);
        int mMax = max(B, C);
        if(mMax == Max)
          return max(A, C);
        else
           return min(Max, mMax);
    }