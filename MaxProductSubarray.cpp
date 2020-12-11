long long maxProduct(int *arr, int n) 
	{
	     long long int i,max_product=1,Max=0,min_product=1,k=1;
	    int f=0;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] > 0)
	        {
	            max_product *= arr[i];
	            min_product = min(min_product*arr[i], k);
	            f = 1;
	        }
	        else if(arr[i] == 0)
	        {
	            max_product = 1;
	            min_product = 1;
	        }
	        else
	        {
	            long long int temp = max_product;
	            max_product = max(min_product*arr[i], k);
	            min_product = temp*arr[i];
	            
	        }
	        if(Max < max_product)
	        {
	            Max = max_product;
	        }
	        
	    }
	    if(f == 0 && Max == 0)
	            return 0;
	    return Max;
	}