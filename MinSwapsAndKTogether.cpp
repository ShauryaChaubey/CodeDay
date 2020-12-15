#include <iostream>
using namespace std;

int main() 
{
	int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	    int n,arr[50],k;
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    cin >> k;
	    int f=0,c=0,j=0,m=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i] <= k)
	        {
	            c++;
	        }
	    }
	    for(int i=0;i<c;i++)
	    {
	        if(arr[i] > k)
	          m++;
	    }
	    f = m;
	    for(int i=0,j=c;j<n;j++,i++)
	    {
	        if(arr[i] > k)
	           m--;
	        if(arr[j] > k)
	           m++;
	        f = min(m, f);
	    }
	    cout << f << endl;
	}
	return 0;
}