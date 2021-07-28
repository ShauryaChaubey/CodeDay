int smallestSubstring(string S) 
    {
        int i=0,j=0,k=0,n=S.size(),x=0;
        bool f0=false,f1=false,f2=false;
        int res=INT_MAX;
        for(x=0; x<n; x++)
        {
            if(S[x] == '0')
            {
                i = x;
                f0 = true;
            }
            else if(S[x] == '1')
            {
                j = x;
                f1 = true;
            }
            else
            {
                k = x;
                f2 = true;
            }
            if(f1 && f2 && f0)
            {
                int Max = max(i, max(j, k));
                int Min = min(i, min(j, k));
                int temp = (Max-Min)+1;
                res = min(temp, res);
            }
        }
        if(!f1 || !f2 || !f0) return -1;
        
        return res;
    }