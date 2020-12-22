#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	    int n,x,arr[1000];
	    cin >> n >> x;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int sum=0,c=0,i=0,j=0,Min=n+1;
	    while(j < n)
	    {
	        while(sum <= x && j < n)
	        {
	            sum += arr[j];
	            j++;
	        }
	        while(sum > x && i < n)
	        {
	            if(Min > j-i)
	            {
	                Min = j-i; 
	            }
	            sum -= arr[i];
	            i++;
	        }
	    }
	     cout << Min << endl;
	}
	return 0;
}