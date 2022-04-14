//using binary search



int count(int arr[], int n, int x) 
	{
	    int res1=-1, res2=-1, start=0, end=n-1;
	    while(start <= end)
	    {
	        int mid = start + (end-start)/2;
	        if(arr[mid] == x)
	        {
	            res1 = mid;
	            end = mid-1;
	        }
	        else if(arr[mid] > x) end = mid-1;
	        else start = mid+1;
	    }
	    start=0, end=n-1;
	    while(start <= end)
	    {
	        int mid = start + (end-start)/2;
	        if(arr[mid] == x)
	        {
	            res2 = mid;
	            start = mid+1;
	        }
	        else if(arr[mid] > x) end = mid-1;
	        else start = mid+1;
	    }
	    //cout << res1 << " " << res2;
	    if(res1 == -1 && res2 == -1) return 0;
	    return (res2-res1) + 1;
	}