int kthSmallest(int arr[], int l, int r, int k) 
    {
        priority_queue<int> maxHp;
        for(int i=l; i<=r; i++)
        {
            if(maxHp.size() < k)
              maxHp.push(arr[i]);
            else
            {
                if(arr[i] < maxHp.top())
                {
                    maxHp.pop();
                    maxHp.push(arr[i]);
                }
            }
        }
        return maxHp.top();
    }