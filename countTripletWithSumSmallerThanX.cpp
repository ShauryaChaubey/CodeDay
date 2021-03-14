long long countTriplets(long long arr[], int n, long long sum)
	{
	    long int c=0;
	    sort(arr, arr+n);
	    for(long int i=0;i<n-2;i++)
	    {
	        long int j=i+1,k=n-1;
	        while(j != k)
	        {
	            if(arr[i] + arr[j] + arr[k] >= sum)
	              k--;
	            else
	            {
	                c += (k-j);
	                j++;
	            }
	        }
	    }
	    return c;
	}
	