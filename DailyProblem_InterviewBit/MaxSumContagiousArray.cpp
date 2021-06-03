int Solution::maxSubArray(const vector<int> &A) 
{
    long long int sum=0;
    //bool flg=false;
    
    int s=0,Max=INT_MIN;
    for(int i=0; i<A.size(); i++)
    {
        s += A[i];
        Max = max(Max,s);
        if(s < 0)
          s = 0;
    }
    return Max;
}