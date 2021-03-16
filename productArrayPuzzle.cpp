vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
{
    vector<long long int>vec;
    long long int prod=1,k=1,f=0,p=0,c=0;
    for(long long int i=0;i<n;i++)
   {
       if(nums[i] == 0)
       {
           c++;
           p=i;
           f=1;
       }
          
   }
   for(long long int i=0;i<n;i++)
   {
       if(nums[i] != 0)
          prod *= nums[i];
   }
   for(long long int i=0;i<n;i++)
   {
       if(f == 1 && i != p || c>1)
           k = 0;
       else if(f == 1 && i == p)
           k = prod;
       if(nums[i] != 0 && f == 0)
           k = prod/nums[i];
       vec.push_back(k);
   }
   return vec;
}