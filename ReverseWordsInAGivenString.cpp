string reverseWords(string S) 
{ 
    int n=S.size(),i=n-1;
    string s,str;
    for(i=n-1;i>=0;i--)
    {
        if(S[i] != '.')
        {
            str += S[i];
        }
        else
        {
            reverse(str.begin(), str.end());
            s += str;
            str = "";
            s += S[i];
        }
    }
    reverse(str.begin(), str.end());
    s += str;
    
    return s;
} 