int lps(string s)
	{
	    int n=s.size(),i=1,j=0,k=1,Max=0;
	    if(n < 2)
	       return 0;
	    while(i < n)
	    {
	        if(s[i] == s[j])
	        {
	            j++;
	            i++;
	            //Max = max(j, Max);
	        }
	        else
	        {
	            i = i-j+1;
	            j = 0;
	        }
	    }
	    return j;
	}