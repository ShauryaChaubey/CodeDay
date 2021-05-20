int findZeros(int n)
        {
            if(n == 1)
              return 5;
            int p=5;
            int count=0;
            while(n/p > 0)
            {
                count += n/p;
                p *= 5;
            }
            return count;
        }
        int findNum(int n)
        {
            int rt=5*n, lf=0, mid=0, ans=0;
            while(lf <= rt)
            {
                mid = (lf+rt)/2;
                if(findZeros(mid) >= n)
                {
                    ans = mid;
                    rt = mid-1;
                }
                else
                  lf = mid+1;
                
            }
            return ans;
        }