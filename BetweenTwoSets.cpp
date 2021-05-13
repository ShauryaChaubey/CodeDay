#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m,i,count=0;
    cin >> n >> m;
    int a[102];
    for(i=0;i<n;i++)
       cin >> a[i];
    int b[102];
    for(int j=0;j<m;j++)
       cin >> b[j];
    for(i=1; i<=100; i++)
    {
        bool flg = true;
        for(int j=0; j<n; j++)
        {
            if(i%a[j] != 0)
          {
              flg = false;
              break;
          }
        }
        for(int j=0; j<m; j++)
        {
            if(b[j]%i != 0)
          {
              flg = false;
              break;
          }
        }
        if(flg == true)
           count++;
    }
    cout << count;
}