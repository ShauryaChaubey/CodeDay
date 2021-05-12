 int findPlatform(int arr[], int dep[], int n)
    {
        int i=0,j=0,count=0;
        sort(arr, arr+n);
        sort(dep, dep+n);
    	for(i=0; i<n; i++)
    	{
    	    if(arr[i] <= dep[j])
    	      count++;
    	    else
    	      j++;
    	}
    	if(count == 0)
    	  return 1;
    	return count;
    }