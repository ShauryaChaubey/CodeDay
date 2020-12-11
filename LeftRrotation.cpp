vector<int> rotateLeft(int d, vector<int> arr) 
{
    int n = arr.size();
    vector<int> a(n);
     for(int i=0;i<n;i++)
     {
        a[(n-d+i)%n] = arr[i];
     }
     return a;
}