int minFlips (string S)
{
    int n=S.size(),a=0,b=0;
    for(int i=0; i<n; i++)
    {
        if(S[i] == '0' && i%2 == 0) a++;
        else if(S[i] == '1' && i%2 != 0) a++;
        
        if(S[i] == '0' && i%2 != 0) b++;
        else if(S[i] == '1' && i%2 == 0) b++;
    }
   
    return a>b? b:a;
}