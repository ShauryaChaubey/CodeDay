#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	    long long int n,arr[1000000],i,j=0,sum=0,l=0,r=0;
	    cin >> n;
	    for(i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    stack<int> s;
	    
	    for(i=0;i<n;i++)
	    {
	        while(!s.empty() && arr[s.top()] < arr[i])
	        {
	            int height = arr[s.top()];
	            s.pop();
	            if(s.empty())
	               break;
	            int distance = i-s.top()-1;
	            int minH = (min(arr[s.top()], arr[i]) - height);
	            sum += (minH*distance);
	        }
	        s.push(i);
	    }
	    cout << sum << endl;
	}
}