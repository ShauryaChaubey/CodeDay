int getMinimumCost(int k, vector<int> c) 
{
    sort(c.begin(), c.end(), greater<int>());
    int count=1,sum=0,i=0,m=k;
    
        while(m>0 && i<c.size())
        {
            sum += count*c[i];
            m--;
            i++;
            if(m == 0 && i < c.size())
            {
                m = k;
                count++;
            }
              
        }
   
    return sum;

}