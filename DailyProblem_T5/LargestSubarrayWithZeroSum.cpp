int maxLen(int A[], int n)
{
    unordered_map<int, int> mp;
    int maxL=0,sum=0;
    for(int i=0; i<n; i++)
    {
        sum += A[i];
        if(sum == 0)
        {
            maxL = max(maxL, i+1);
        }
        else if(mp.find(sum) != mp.end())
        {
            auto itr = mp.find(sum);
            int temp = itr->second;
            maxL = max(maxL, abs(temp-i));
        }
        else
        {
            mp.insert({sum, i});
        }
    }
    return maxL;
}