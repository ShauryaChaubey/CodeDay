int circularSubarraySum(int arr[], int num)
{
    if(num == 1)
       return arr[0];
    int sum=0,k=0;
    for(int i=0;i<num;i++)
    {
        sum += arr[i];
    }
    int currentMax=arr[0],currentMin=arr[0],Max=arr[0],Min=arr[0];
    for(int i=1;i<num;i++)
    {
        currentMax = max(currentMax+arr[i], arr[i]);
        currentMin = min(currentMin+arr[i], arr[i]);
        if(Max < currentMax)
           Max = currentMax;
        if(Min > currentMin)
           Min = currentMin;
    }
    if(Min == sum)
       return Max;
    return max((sum-Min), Max);
}