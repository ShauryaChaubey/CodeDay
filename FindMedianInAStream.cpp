 priority_queue<int> maxHp;
    priority_queue<int, vector<int>, greater<int>> minHp; 
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(maxHp.size() == 0)
        {
            maxHp.push(x);
            return;
        }
        else if(maxHp.size() > minHp.size())
        {
            if(maxHp.top() > x)
            {
                int temp = maxHp.top();
                maxHp.pop();
                maxHp.push(x);
                minHp.push(temp);
            }
            else
            {
                minHp.push(x);
            }
        }
        else
        {
            if(maxHp.top() > x) maxHp.push(x);
            else
            {
                minHp.push(x);
                //maxHp.pop();
                maxHp.push(minHp.top());
                minHp.pop();
            }
        }
        
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(maxHp.size() > minHp.size()) return (double)maxHp.top(); 
        return (double)(maxHp.top()+minHp.top())/2;
    }