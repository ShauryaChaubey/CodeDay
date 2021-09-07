int setBits(int N) 
    {
        int c=0;
        while(N>0)
        {
            if(N%2 != 0) c++;
            N /= 2;
        }
        return c;
        // Write Your Code here
    }