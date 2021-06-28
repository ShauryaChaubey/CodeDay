int count4Divisibiles(int arr[], int n)
    {
        int freq[4] = {0, 0, 0, 0};
        for(int i=0; i<n; i++)
          freq[arr[i]%4]++;
        int count=0;
        count += (freq[0]*(freq[0]-1))/2;
        count += (freq[2]*(freq[2]-1))/2;
        count += (freq[1]*freq[3]);
        
        return count;
    }