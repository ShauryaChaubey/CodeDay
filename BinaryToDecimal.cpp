int binary_to_decimal(string str)
		{
		    int sum = 0;
	       for(int i=0; i<str.size(); i++)
	       {
	            if(str[i] == '1')
	              sum += pow (2, (str.size()-i-1));
	        }
        	return sum;
		}