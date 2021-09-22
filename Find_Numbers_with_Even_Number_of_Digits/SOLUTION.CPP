//TIME COMPLEXITY - O(N^2) 
int findNumbers(vector<int>& nums)
    {
        int remainder,count_num=0,countDigits=0;
        for(int i=0;i<nums.size();i++)
        {
            countD=0;
            while(nums[i]!=0)
            {
                 remainder=nums[i]%10;
                 countDigits++;
                 nums[i]=nums[i]/10;
            } 
            if(countD%2==0)
            {
                
                count_num++;
            }
        }
        return count_num;
  
    }
