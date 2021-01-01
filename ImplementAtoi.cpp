int atoi(string str)
{
    int f=1,res=0,i=0;
    if(str[0] == '-')
    {
        f = -1;
        i = 1;
    }
       
    while(i<str.size())
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            res = res*10 + str[i]-'0';
        }
        else
        {
            return -1;
        }
        i++;
    }
    return res*f;
}