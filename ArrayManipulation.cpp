#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,max=0,i,j;
    
    cin >> n >> m;
    long long int *arr=new long long int[n+1]();
    for(j=0;j<m;j++)
    {
        long long int a,b,k;
        cin >> a >> b >> k;
        arr[a] += k;
        if(b+1 <= n)
          arr[b+1] -= k;
    }
    long long int sum=0;
    for(i=1;i<=n;i++)
    {
        sum += arr[i];
        if(sum > max)
          max = sum;
    }
    cout << max;
}
