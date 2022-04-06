int maxArea(vector<int>& ht) 
    {
        int ans=0, l=0, rt=ht.size()-1;
        while(l < rt)
        {
            int width = min(ht[l], ht[rt]);
            int area = width*(rt-l);
            ans = max(area, ans);
            if(ht[l] < ht[rt]) l++;
            else if(ht[l] > ht[rt]) rt--;
            else
            {
                l++, rt--;
            }
        }
        return ans;
    }