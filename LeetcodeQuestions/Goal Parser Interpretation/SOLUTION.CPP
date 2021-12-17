string interpret(string command) 
    {
        string str;
        string o="o";
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='('&& command[i+1]==')')
            {
                str=str+o;
                i++;
            }
            else if(command[i]=='(' || command[i]==')')
            {
                continue;
            }
            else
            {
                str=str+command[i];
            }
     
        }
        return str;
        
    }
