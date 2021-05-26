void segregateEvenOdd(int arr[], int n) 
	{
	    int e[n],o[n],k=0,j=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2 == 0)
	        {
	            e[j] = arr[i];
	            j++;
	        }
	        else
	        {
	            o[k] = arr[i];
	            k++;
	        }
	    }
	    sort(e, e+j);
	    sort(o, o+k);
	    int l=0,m=0;
	    for(int i=0; i<n; i++)
	    {
	        if(i<j)
	        {
	            arr[i] = e[i];
	        }
	        else
	        {
	            arr[i] = o[l];
	            l++;
	        }
	    }
	}