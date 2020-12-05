class Solution{
public:

	void rearrange(int arr[], int n) 
	{
	    int a[50000],b[50000],j=0,k=0,i,f=0;
	    for(i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                a[k]=arr[i];
            //cout << a[k] << " ";
                k++;
            }
            else if(arr[i]<0)
            {
                b[j]=arr[i];
            //cout << b[j] << " ";
                j++;
            }
        }
        int p=0,q=0;
        i=0;
        while(p<j && q<k)
        {
            if(f == 0)
            {
                arr[i] = a[q];
                q++;
                f = 1;
            }
            else
            {
                arr[i] = b[p];
                p++;
                f = 0;
            }
            i++;
        }
        while(q<k)
        {
            arr[i] = a[q];
            q++;
            i++;
        }
        while(p<j)
        {
            arr[i] = b[p];
            p++;
            i++;
        }
	}
};