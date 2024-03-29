ll findSubarray(vector<ll> arr, int n ) 
{
    ll count=0, sum=0;
    unordered_map<ll, ll> map;
    map[0] = 1;
    for(ll i=0;i<n;i++)
    {
        sum += arr[i];
        if(map.find(sum) == map.end())
        {
            map[sum]++;
        }
        else
        {
            count += map[sum];
            map[sum]++;
        }
    }
    return count;
}

//OR

ll findSubarray(vector<ll> arr, int n ) 
    {
        unordered_map<ll, ll> mp;
        ll count=0, sum=0;
        mp[0]=1;
        for(int i=0; i<n; i++)
        {
            sum += arr[i];
            if(mp.find(sum) != mp.end())
              count += mp[sum];
            mp[sum]++;
        }
        return count;
    }