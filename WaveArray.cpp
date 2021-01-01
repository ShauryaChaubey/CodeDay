void convertToWave(int *arr, int n)
{
    int i=1,j=1;
    while(i < n)
    {
        if(arr[i] > arr[i-1])
        {
            swap(arr[i], arr[i-1]);
        }
        if(arr[j] > arr[j-1])
        {
            swap(arr[i], arr[i-1]);
        }
        i += 2;
        j += 2;
    }
    
}