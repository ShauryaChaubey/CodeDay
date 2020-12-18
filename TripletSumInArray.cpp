#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	    int n,x,arr[1000],a[1000],k=0; 
	    cin >> n >> x;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    int f=0;
	    for(int i=0;i<n-2;i++)
	    {
	        int sum = x-arr[i];
	        unordered_set<int> set;
	        for(int j=i+1;j<n;j++)
	        {
	            if(set.find(sum-arr[j]) != set.end())
	            {
	                f = 1;
	                break;
	            }
	            else
	            {
	                set.insert(arr[j]);   
	            }
	        }
	        if(f == 1)
	           break;
	    }
	    cout << f << endl;
	    
	}
}