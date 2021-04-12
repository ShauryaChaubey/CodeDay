#include <iostream>

using namespace std;

int main()
{
    string s = "01001110";
    int count1=0,count0=0,count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '0')
          count0++;
        else if(s[i] == '1')
          count1++;
        if(count0 == count1)
          count++;
    }
    if(count1 != count0)
       cout << "-1";
    else
       cout << count;
}
