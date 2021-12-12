 bool uniqueOccurrences(vector<int>& arr) {
     unordered_map <int,int> m;
        for(auto x: arr){
            m[x]++;
        }
        set <int> s;
        for(auto x : m){
            if(s.find(x.second)!=s.end())
                return false;   
            s.insert(x.second);
        }
        return true;   
    }
