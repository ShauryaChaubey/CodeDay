string armstrongNumber(int n)
    {
        int k=n,count=0,m=0;
        while(k != 0)
        {
            count++;
            k /= 10;
        }
        k = n;
        while(k != 0)
        {
            int rem = k%10;
            m += pow(rem, count);
            k /= 10;
        }
        if(m == n)
          return "Yes";
        return "No";
    }