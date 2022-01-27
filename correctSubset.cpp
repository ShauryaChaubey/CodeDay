#include<bits/stdc++.h>
using namespacestd;

bool solve(vector<int> pm, int n, int x)
{
    if(x == 0) return true;
    if(n == 0) return false;
    if(pm[n-1] > x) return solve(pm, n-1, x);

    return solve(pm, n-1, x) || solve(pm, n-1, x-pm[n-1]);
}

int main()
{
    int n,q,k=0;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> pm(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        bool f=false;
        if(i > 1)
        {
            for(int j=2; j<=i/2; j++)
            {
                if(i%j == 0)
                {
                    f = true;
                    break;
                } 
            }
        }
        if(!f)
        {
            pm[k] = v[i];
            k++;
        } 
        
    }
    while(q--)
    {
        int x;
        cin >> x;
        if(solve(pm, n, x) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}