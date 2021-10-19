 vector<string> uncommonFromSentences(string s1, string s2)
    {
    vector<string>result;
    unordered_map<string,int> map;
    stringstream ss1(s1);
    string str;
    while(ss1>>str)
    {
        map[str]++;
    }
    
    stringstream ss2(s2);
    while(ss2>>str)
    {
        map[str]++;
    }
    
//In this step we will find the uncommon elements from map and store them in result vector
    for(auto it : map)
    {
        if(it.second==1)
        {
            result.push_back(it.first);
        }
    }
    
    return result;
}   
    
