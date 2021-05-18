long long int maxSum(int arr[], int n)
{
    sort(arr, arr+n);
    int i=0,j=n-1,count=0;
    long long sum=0;
    while(i < j)
    {
        sum += (abs)(arr[j]-arr[i]);
        if(count%2 == 0)
          i++;
        else
          j--;
        count++;
    }
    sum += abs(arr[j] - arr[0]);
    return sum;
}