  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string str1;
        string str2;
        int w1=word1.size();
        int w2=word2.size();
        
        for(int i=0;i<w1;i++)
        {
            str1=str1+word1[i];
        }
        for(int i=0;i<w2;i++)
        {
            str2=str2+word2[i];
        }
        if(str1==str2)
            return true;
        else
            return false;
        
        
    }
