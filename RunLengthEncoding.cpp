char *encode(char *src)
{
    string str = "";
    char c = src[0];
    int j=strlen(src),count=1;
   for(int i=1;i<j;i++)
   {
       if(src[i] != c)
       {
           str += c;
           str += to_string(count);
           count = 1;
           c = src[i];
       }
       else
       {
           count++;
       }
   }
   str += src[j-1];
   str += to_string(count);
   char * ch = new char[str.size() + 1];
   for(int i=0;i<str.size();i++)
   {
       ch[i] = str[i];
   }
   ch[str.size()] = '\0';
   return ch;
}