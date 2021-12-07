 bool areOccurrencesEqual(string s)
    {
        vector<int>v;
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]+=1;
        }
        for(int i=0;i<s.length();i++)
        {
            v.push_back(m.at(s[i]));
        }
        set<int>st;
        for(int j=0;j<v.size();j++)
        {
            st.insert(v[j]);
        }
        if(st.size()!=1)
            return false;
        else
            return true;
    }
