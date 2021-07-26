 int romanToInt(string s) 
    {
        int num=0;
        
        if(s[s.size()-1] == 'I') num = 1;
        else if(s[s.size()-1] == 'V') num = 5;
        else if(s[s.size()-1] == 'X') num = 10;
        else if(s[s.size()-1] == 'L') num = 50;
        else if(s[s.size()-1] == 'C') num = 100;
        else if(s[s.size()-1] == 'D') num = 500;
        else num = 1000;
        
        for(int i=s.size()-2; i>=0; i--)
        {
            if(s[i] == 'I')
            {
                if(s[i+1] == 'I') num += 1;
                else num -= 1;
            }
            
            if(s[i] == 'V')
            {
                if(s[i+1] == 'V' || s[i+1] == 'I') num += 5;
                else num -= 5;
            }
            
            if(s[i] == 'X') 
            {
                if(s[i+1] == 'I' || s[i+1] == 'V' || s[i+1] == 'X') num += 10;
                else num -= 10;
            }
                
            if(s[i] == 'L')
            {
                if(s[i+1] == 'I' || s[i+1] == 'V' 
                               || s[i+1] == 'X' || s[i+1] == 'L') num += 50;
                else num -= 50;
            }
                
            
            if(s[i] == 'C')
            {
                if(s[i+1] == 'I'|| s[i+1] == 'V' || 
                   s[i+1] == 'X' || s[i+1] == 'L' || s[i+1] == 'C') num += 100;
                else num -= 100;
            }
                
            if(s[i] == 'D')
            {
                if(s[i+1] == 'I'|| s[i+1] == 'V' 
                               || s[i+1] == 'X' || s[i+1] == 'L' 
                               || s[i+1] == 'C' || s[i+1] == 'D') num += 500;
                else num -= 500;
            }
                
            if(s[i] == 'M')
            {
                if(s[i+1] == 'I' || s[i+1] == 'V' || s[i+1] == 'X' || s[i+1] == 'L'
                               || s[i+1] == 'C' || s[i+1] == 'D' || s[i+1] == 'M') 
                    num += 1000;
                else num -= 1000;
            }
        }
        
        return num;
    }