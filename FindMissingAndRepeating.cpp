int *findTwoElement(int *arr, int n) 
    {
        sort(arr, arr+n);
        int *a = new int(2);
        //a[0] = 0;
        //a[1] = 0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] == arr[i+1])
            {
                a[0] = arr[i];
                break;
            }
                
        }
        int k=1,i=0;
        while(i<=n)
        {
            if(arr[i] == k)
            {
                i++;
                k++;
            }
            else if(arr[i+1] == k)
            {
                i++;
            }
            else
            {
                a[1] = k;
                break;
            }
        }
        if(a[1] == 0)
           a[1] = n;
        return a;
    }