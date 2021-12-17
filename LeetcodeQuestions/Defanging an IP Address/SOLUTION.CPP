string defangIPaddr(string address)
    {
       string s="[.]";
       string str;
       for(int i=0;i<address.length();i++)
       {
          if(address[i]=='.')
          {
            str=str+s;
          }
           else
           {
               str=str+address[i];
               continue;
           }
       }
        return str;      
    }
