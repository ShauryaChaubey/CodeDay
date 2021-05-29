vector<int> findSum(vector<int> &a, vector<int> &b) 
	{
	    int i=a.size()-1, j=b.size()-1;
	    vector<int> v;
	    int carry=0;
	    while(i>=0 && j>=0)
	    {
	        int sum = a[i]+b[j]+carry;
	        if(sum > 9)
	        {
	            carry = sum/10;
	            sum = sum%10;
	        }
	        else
	          carry = 0;
	        v.push_back(sum);
	        i--;
	        j--;
	    }
	    while(i >= 0)
	    {
	        int sum = a[i]+carry;
	        if(sum > 9)
	        {
	            carry = sum/10;
	            sum = sum%10;
	        }
	        else
	          carry = 0;
	        v.push_back(sum);
	        i--;
	    }
	    while(j >= 0)
	    {
	        int sum = b[j]+carry;
	        if(sum > 9)
	        {
	            carry = sum/10;
	            sum = sum%10;
	        }
	        else
	          carry = 0;
	        v.push_back(sum);
	        j--;
	    }
	    if(carry > 0)
	      v.push_back(carry);
	    reverse(v.begin(), v.end());
	    return v;
	}