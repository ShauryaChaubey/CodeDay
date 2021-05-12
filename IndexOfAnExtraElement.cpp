int findExtra(int a[], int b[], int n) 
    {
        int start=0, end=n-1, index;
        while(start <= end)
        {
            int mid = (start+end)/2;
            if(a[mid] == b[mid])
            {
                start++;
            }
            else
            {
                index = mid;
                end--;
            }
        }
        return index;
    }