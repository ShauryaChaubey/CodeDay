int minJumps(int arr[], int n)
{
    if(n <= 0)
    {
        return 0;
    }
      
    if(arr[0] == 0)
    {
        return -1;
    }
      
    int count = 1, maxReach = arr[0], step = arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(i == n-1)
        {
            return count;
        }
        maxReach = max(maxReach, i+arr[i]);
        step--;
        if(step == 0)
        {
            count++;
            if(i >= maxReach)
            {
               return -1;
            }
            step = maxReach - i;
        }
        
    }
    return -1;
}