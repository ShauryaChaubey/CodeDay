#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	for(int t=0;t<T;t++)
	{
	    int n,num,f=0,p=-1,k=0;
	    cin >> n >> num;
	    int arr[10000];
	    for(int i=0;i<n;i++)
	       cin >> arr[i];
	    sort(arr, arr+n);
	    for(int i=0;i<n && p==-1;i++)
	    {
	        if(arr[i] > num)
	        {
	            k = arr[i]-num;
	            f=1;
	        }
	        for(int j=0;j<i && f==1;j++)
	        {
	            if(arr[j] == k)
	            {
	                p = 1;
	                break;
	            }
	              
	        }
	    }
	    cout << p << endl;
	}
}