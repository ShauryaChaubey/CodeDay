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

//OR

string reverseWords(string s) 
    {
        if(s == "")
            return "";
        int j=0,k=0;
        reverse(s.begin(), s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ')
            {
                s[j] = s[i];
                j++;
            }
            else if(i > 0 && s[i-1] != ' ')
            {
                reverse(s.begin()+k, s.begin()+j);
                s[j] = ' ';
                j++;
                k = j;
            }
        }
        reverse(s.begin()+k, s.begin()+j);
        if(j > 0 && s[j-1] == ' ')
            j = j-1;
        return s.substr(0, j);
    }