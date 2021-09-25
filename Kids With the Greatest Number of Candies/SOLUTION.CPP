vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool>v;
        int max=-1;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>max)
            {
                max=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++)
        {
            if(max > candies[i]+extraCandies )
            {
                v.push_back(false);
            }
            else 
                v.push_back(true);
        }
        return v;
        
    }
