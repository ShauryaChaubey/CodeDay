string chooseandswap(string a)
    {
        if(a.size() <= 1)
           return a;
        int arr[28],i,j;
        
        for(i=0; i<28; i++)
           arr[i] = -1;
        for(i=0; i<a.size(); i++)
        {
            if(arr[a[i]-'a'] == -1)
              arr[a[i]-'a'] = i;
        }
        char p,q;
        for(i=0; i<a.size(); i++)
        {
            int f=0;
            for(j=0; j<a[i]-'a'; j++)
            {
                
                if(arr[j] > arr[a[i]-'a'])
                {
                    f = 1;
                    break;
                }
            }
            if(f == 1)
              break;
        }
        if(i < a.size())
        {
            p = a[i];
            q = (char)(j-'a');
            for(int i=0; i<a.size(); i++)
            {
                if(a[i] == p)
                  a[i] = q;
                else if(a[i] == q)
                  a[i] = p;
            }
        }
        
        return a;
    }