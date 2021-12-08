int maximum69Number (int num) 
    { 
       int r;
       vector<int>v;
       while(num!=0)
       {
           r=num%10;
           v.push_back(r);
           num=num/10;
         
       }
        reverse(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           if(v[i]==6)
           {
                v[i]=9;
               break;
           }
           
       }
        int number=0; 
        for(auto x: v){
            number = number*10 + x;
        }
        return number;
        
    }
