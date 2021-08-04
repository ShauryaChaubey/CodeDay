vector<int> subarraySum(int arr[], int n, int s)
    {
        int i=0,j=0,sum=0,k=0;
        while(i<n && j<n)
        {
            if(sum == s)
            {
                return {i+1, j};
            }
            else if(sum > s)
            {
                sum -= arr[i];
                i++;
            }
            else if(sum < s)
            {
                //j++;
                sum += arr[j];
                j++;
            }
        }
        return {-1};
    }