 int numRescueBoats(vector<int>& v, int limit) 
    {
        int ans=0, k=limit, i=v.size()-1,j=0,c=0;
        sort(v.begin(), v.end());
        while(i>=j)
        {
            if((k-v[i])>=0 && c<2)
            {
                k -= v[i];
                i--;
                c++;
            }
            else if((k-v[j])>=0 && c<2)
            {
                k -= v[j];
                j++;
                c++;
            }
            else
            {
                ans++;
                k = limit;
                c=0;
            }
        }
          if(k < limit)
             ans++;
        return ans;
    }

    //simpler approch
    int numRescueBoats(vector<int>& v, int limit) 
    {
        int ans=0, i=v.size()-1,j=0;
        sort(v.begin(), v.end());
        while(j<v.size() && i>=j)
        {
            if((v[i]+v[j])<=limit)
            {
                j++;
                i--;
                ans++;
            }
            else
            {
                ans++;
                i--;
            }
        }
        return ans;
    }