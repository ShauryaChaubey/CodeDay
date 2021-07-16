    int search(int arr[], int N)
	{
	    int i=0,j=N-1,mid=0;
	    while(i<=j)
	    {
	        mid = i + (j-i)/2;
	        if(mid%2 == 0 && arr[mid] == arr[mid+1] || mid%2 != 0 && arr[mid] == arr[mid-1])
	          i = mid+1;
	        else
	         j = mid-1;
	    }
	    return arr[i];
	}

    //OR

    int search(int arr[], int N)
	{
	    int i=0,j=N-1;
	    while(i<=j)
	    {
	        if(arr[i] == arr[i+1])
	          i += 2;
	        else
	         return arr[i];
	        if(arr[j] == arr[j-1])
	          j -= 2;
	        else
	         return arr[j];
	    }
	    return -1;
	}