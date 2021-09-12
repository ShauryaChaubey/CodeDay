int countBitsFlip(int a, int b)
    {
        int c=0;
        while(a>0 && b>0)
        {
            if(a%2 != b%2) c++;
            a /= 2;
            b /= 2;
        }
        while(a>0)
        {
            if(a%2 == 1) c++;
            a /= 2;
        }
        while(b>0)
        {
            if(b%2 == 1) c++;
            b /= 2;
        }
        return c;
    }