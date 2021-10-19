 int repeatedNTimes(vector<int>& nums)
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]+=1;
        }
        for(auto x:m)
        {
            if(x.second >1 )
                return x.first;
        }
        return -1;
        
    }
