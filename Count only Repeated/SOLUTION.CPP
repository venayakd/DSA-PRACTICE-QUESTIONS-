 pair<int, int> findRepeating(int *arr, int n)
    {
        pair<int,int>p;
        p.first=-1;
        p.second=-1;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]=m[arr[i]]+1;
        }
        for(auto x:m)
        {
            if(x.second>1)
            {
                p.first=x.first;
                p.second=x.second;
                break;
            }
            
            
        }
        return p;
        
    }
