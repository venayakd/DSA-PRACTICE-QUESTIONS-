  vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int>v;
        int count=0,key=0;    
        for(int i=0;i<nums.size();i++)
        {
             key=nums[i];
            count=0;
            for(int j=0;j<nums.size();j++)
            {
               
                if(nums[j]<key)
                {
                    count++;
                }
                      
            }    
              v.push_back(count);  
        }
        return v;
        
        
    }
