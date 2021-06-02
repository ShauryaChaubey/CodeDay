bool isRotated(string str1, string str2)
    {
        if(str1.size() != str2.size())
          return 0;
        if(str1.size() == 1 && str1 == str2)
            return 1;
        string s1=str1,s2=str2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
          int i=0,j=0;
          if(s1 != s2)
            return 0;
          
        while(i<str1.size())
        {
            if(str1[i] == str2[j])
            {
                //i++;
                j++;
            }
            else
            {
                j = 0;
            }
            i++;
        }
        if(abs(i-j) == 2 || j == 2)
          return 1;
        return 0;
    }