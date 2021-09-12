vector<int> singleNumber(vector<int> nums) 
    {
        int axorb = 0;
        for(int i: nums)
        {
            axorb = axorb^i;
        }
        int rSet=(axorb)&(-axorb); //to get the set mask i.e. for 011010, rSet=000010
        int a=0,b=0;
        for(int i: nums)
        {
            if((rSet&i) == 0) a = a^i;
            else b = b^i;
        }
        if(b > a) return {a, b};
        return {b, a};
    }