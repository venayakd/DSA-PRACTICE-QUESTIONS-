 int numJewelsInStones(string jewels, string stones) 
    {
        map<char,int>m;
        int count=0;
        for(int i=0;i<jewels.length();i++)
        {
            m[jewels[i]]+=1;
        }
        for(int j=0;j<stones.length();j++)
        {
            if(m.find(stones[j])!=m.end())
                count++;
        }
        return count;
    }
