vector<vector<int> > fourSum(vector<int> &arr, int k) 
    {
        vector<vector<int>> v;
        set<vector<int>> s;
        //bool flg=false;
        int n=arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0; i<n-3; i++)
        {
            for(int j=i+1; j<n-2; j++)
            {
                int h=j+1;
                int g=n-1;
                while(h<g)
                {
                    if(arr[i]+arr[j]+arr[h]+arr[g] == k)
                    {
                        s.insert({arr[i],arr[j],arr[h],arr[g]});
                        h++;
                        g--;
                    }
                    else if(arr[i]+arr[j]+arr[h]+arr[g] < k)
                        h++;
                    else
                        g--;
                }
            }
        }
        for(auto itr: s)
          v.push_back(itr);
        return v;
        
    }