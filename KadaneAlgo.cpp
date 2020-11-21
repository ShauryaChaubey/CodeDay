int maxSubarraySum(int arr[], int n)
{
    long long int i=0,sum=0,max=0;
    for(i=0;i<n;i++)
    {
        sum += arr[i];
        if(max < sum)
        {
            max = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    return max;
    
}