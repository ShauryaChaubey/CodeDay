//Plus One

//Approch: to add one to the last element of array, we can check by /10 after adding 1, if is getting 10 or less, then proceed by %10


vector<int> plusOne(vector<int>& v) 
    {
        int k=1, i=v.size()-1, temp;
        while(k && i>=0)
        {
            temp=k;
            k = (v[i]+k)/10;
            v[i] = (v[i]+temp)%10;
            i--;
        }
        if(k) v.insert(v.begin(), 1);
       return v; 
    }