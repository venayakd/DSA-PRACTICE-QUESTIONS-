string kthDistinct(vector<string>& arr, int k)
    {
        unordered_map<string,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]+=1;
        }
        vector<string>v;
        string str;
        str="";
        for(int j=0;j<arr.size();j++)
        {
            if(m.at(arr[j]) == 1)
            {
                v.push_back(arr[j]);
            }
        }
        
        if(v.size()<k)
        {
            return str;
        }
        else return v[k-1];
                
    }
