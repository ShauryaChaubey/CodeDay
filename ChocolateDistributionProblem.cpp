#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin >> T;
    for(t=0;t<T;t++)
    {
        long long int n,i,k,j,Min=INT_MAX;
        cin >> n;
        vector<long long int> arr(n);
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        sort(arr.begin(), arr.end());
        j=k-1;
        for(i=0;j<n;i++,j++)
        {
            Min = min(Min,(arr[j]-arr[i]));
        }
        cout << Min << endl;
    }
}