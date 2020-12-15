#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t,T;
	cin >> T;
	for(t=0;t<T;t++)
	{
	    int m,n,a[10000],b[10000];
	    cin >> m >> n;
	    unordered_map<int, int>arr;
	    //for(int i=0;i<m;i++)
	        //arr[i] = 0;
	    
	    for(int i=0;i<m;i++)
	    {
	        cin >> a[i];
	        arr.insert(make_pair(a[i],1));
	        //arr[a[i]]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin >> b[i];
	        arr[b[i]]++;
	    }
	    
	    int c=0;
	    for(auto& it:arr)
	    {
	        if(it.second == 2)
	          //cout << endl << it.first << " ";
	          c++;
	    }
	    //cout << endl << c << endl;
	    if(c == n)
	      cout << "Yes" << endl;
	     else
	       cout << "No" << endl;
	}
}