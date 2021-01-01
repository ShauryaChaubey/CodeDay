int convertFive(int n) 
{
    string s = to_string(n);
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '0')
        {
            s[i] = '5';
        }
    }
    n = (stoi)(s);
    return n;
}