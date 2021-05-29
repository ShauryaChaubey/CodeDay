 void delMid(stack<int>&s, int mid, int n)
    {
        if(mid == n)
        {
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        delMid(s, mid, n-1);
        s.push(temp);
        return;
          
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        if(sizeOfStack == 0)
          return;
        int mid = 0;
        if(sizeOfStack%2 == 0)
          mid = sizeOfStack/2;
        else
          mid = (sizeOfStack/2)+1;
        delMid(s, mid, sizeOfStack);
        return;
    }