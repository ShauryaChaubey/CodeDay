string firstAlphabet(string S)
	{
	    int j=0;
	    string s = "";
	    s += S[j];
	    for(int i=1;i<S.length();i++)
	    {
	        if(S[i] == ' ')
	        {
	            s += S[i+1];
	            //j++;
	        }
	    }
	    return s;
	}