int equilibriumPoint(long long a[], int n) 
{
    long long int sum=0,s=0;
    if(n == 1)
      return 1;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    for(int i=0;i<n;i++)
    {
        s += a[i];
        sum -= (a[i] + a[i+1]);
        if(s == sum)
          return i+2;
        else
          sum += a[i+1];
    }
    return -1;
}