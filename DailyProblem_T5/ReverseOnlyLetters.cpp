string reverseOnlyLetters(string s) //"Test1ng-Leet=code-Q!" -> "Qedo1ct-eeLg=ntse-T!"
    {
        int j=s.size()-1;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            while(j>=0 && !isalpha(s[j])) j--;
            if(!isalpha(s[i]))
            {
                str += s[i];
                //i++;
            }
            else
            {
                str += s[j];
                j--;
            }
        }
        return str;
    }