#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n);
	long long int Q;
	cin >> Q;
	long long int power[Q];
	for(long long int i=0;i<Q;i++)
	{
		cin >> power[i];
	}
	long long int i=0;
	while(Q--)
	{
		long long int sum=0,c=0;
		for(long long int j=0;j<n;j++)
		{
			if(arr[j] <= power[i])
			{
				sum += arr[j];
				c++;
			}
			else
			{
				break;
			}
		}
		cout << c << " " << sum << endl;
		i++;
	}
}