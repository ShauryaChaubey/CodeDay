int countPowerOfTwo(int n)
{
    int x = 0;
    while((1 << x) <= n)
       x++;
      
    return x-1;
}

int countSetBits(int n)
{
    if(n == 0)
       return 0;
    int x = countPowerOfTwo(n);
    int setBitTill2x = x * ((1 << (x-1)));
    int msbSetBit = n - (1 << x) + 1;
    int rem = n - (1 << x);
    int ans = setBitTill2x + msbSetBit + countSetBits(rem);
    
    return ans;
    
}