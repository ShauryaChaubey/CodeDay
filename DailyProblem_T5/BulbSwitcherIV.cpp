int minFlips(string target) 
    {
        int count=0;
        for(int i=target.size()-1; i>0; i--)
        {
            if(target[i] != target[i-1]) count++;
        }
        if(target[0] == '0') return count;
        return count+1;
    }