//TIME COMPLEXITY O(N)
int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max=-1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else{
                count=0;
            }
            if(max<count)
            {
                max=count;
            }

        }
            return max;
    }
