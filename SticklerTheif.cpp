//Dynamic Approch

ll FindMaxSum(ll arr[], ll n)
{
    long long int check[n];
    check[0] = arr[0];
    check[1] = max(arr[0], arr[1]);
    for(int i=2;i<n;i++)
    {
        check[i] = max(check[i-1], check[i-2]+arr[i]);
    }
    
    return check[n-1];
}

//Another Method

ll FindMaxSum(ll arr[], ll n)
{
    ll sum=0,maxVal=0,count1=0,count2=0;
    if(n == 1)
      return arr[0];
    if(n == 2)
      return max(arr[0], arr[1]);
    count1 = max(arr[0], arr[1]);
    count2 = arr[0];
    for(int i=2;i<n;i++)
    {
        maxVal = max(count1, count2+arr[i]);
        count2 = count1;
        count1 = maxVal;
    }
    return maxVal;
}