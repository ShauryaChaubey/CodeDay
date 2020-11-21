#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n,arr[1000],k;
	cin >> k;
	cin >> n;
	for(int i=0; i<n; i++)
	{
	    cin >> arr[i];
	}
	for(int i=0; i<n; i+=k)
	{
	    int m=i+k,j=i;
	    while(m > j)
        {
           swap(arr[j], arr[m-1]);
           j++;
           m--;
       }
	}
	//cout << endl;
	for(int i=0;i<n;i++)
	{
	    cout << arr[i] << " ";
	}
	
} 

