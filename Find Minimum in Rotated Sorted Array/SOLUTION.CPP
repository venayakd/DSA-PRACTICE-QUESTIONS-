int findMin(vector<int>& nums) 
    {
        int low= 0;
        int high =nums.size()-1;
        while(low <high)
        {
            int mid = (low + high)/ 2;
            if(nums[mid]<nums[high])
            {
                high = mid;
            }
            else 
            {
                low = mid +1;
            }
            
        }
        //we can also return nums[high] because at the end low = high 
        return nums[low];
        
    }
