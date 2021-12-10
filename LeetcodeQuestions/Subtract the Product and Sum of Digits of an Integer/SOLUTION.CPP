 int subtractProductAndSum(int n)
    {
        vector<int>v;
        while(n!=0)
        {
          int r=n%10;
          v.push_back(r);
          n=n/10;
        }
        int sum=0;
        int prod=1;
        for(int i=0;i<v.size();i++)
        {
            sum=sum+v[i];
            prod=prod*v[i];
        }
        return prod-sum;
        
        
    }
