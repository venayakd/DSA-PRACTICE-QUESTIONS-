class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
       int n= s.length();
        string newstr(n,'.'); 
        int i=0;
        for(auto x : indices)
        { 
            newstr[x]= s[i];
            i++;
        }
        return newstr;
    }
};