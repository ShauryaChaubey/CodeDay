int minJumps(int arr[], int n)
{
    if(n <= 0)
      return 0;
      
    if(arr[0] == 0)
      return -1;
      
    int count = 1;
    int maxR = arr[0];
    int step = arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(i == n-1)
        {
            return count;
        }
        maxR = max(maxR, i+arr[i]);
        step--;
        if(step == 0)
        {
            count++;
            if(i >= maxR)
            {
               return -1;
            }
            step = maxR - i;
        }
        
    }
    return -1;
}