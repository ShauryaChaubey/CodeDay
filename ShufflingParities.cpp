#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<ll> arr(n);
	    ll o=0,e=0,sum=0; 
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	        if((arr[i]%2 == 0 && (i+1)%2 != 0) || (arr[i]%2 != 0 && (i+1)%2 == 0)) sum++;
	        else if(arr[i]%2 == 0 && (i+1)%2 == 0) e++;
	        else if(arr[i]%2 != 0 && (i+1)%2 != 0) o++;
	    }
	    cout << sum+(2*min(e,o)) << endl;
	}
	return 0;
}
