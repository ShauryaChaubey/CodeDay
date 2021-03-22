#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() 
{
	ll T;
	cin >> T;
	for(ll t=0;t<T;t++)
	{
		ll n,Q;
		cin >> n >> Q;
		vector<pair<ll, ll>> range;
		for(ll i=0;i<n;i++)
		{
			ll a,b;
			cin >> a >> b;
			range.push_back({a,b});
		}
		sort(range.begin(), range.end());
		ll indx = 0;
		for(ll i=1;i<range.size();i++)
		{
			if(range[indx].second >= range[i].first)
			{
				range[indx].second = max(range[i].second,
				 range[indx].second);
			}
			else
			{
				indx++;
				range[indx] = range[i];
			}

		}
		while(Q--)
		{
			ll q;
			cin >> q;
			ll ans = -1;
			for(ll i=0;i<=indx;i++)
			{
				if(q <= (range[i].second-range[i].first)+1)
				{
					ans = q + range[i].first-1;
                    break;
				}
				 else
				{
					q = q - ((range[i].second-range[i].first)+1);
				}
			}
			cout << ans << endl;
		}
	}
}