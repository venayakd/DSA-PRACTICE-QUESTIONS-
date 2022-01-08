class Solution {
public:
    bool halvesAreAlike(string s)
    {
        int c1=0;
        int c2=0;
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i]=='a' || s[i]=='A'|| s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            {
                c1++;
            }
        }
        for(int i=s.length()/2;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='A'|| s[i]=='e' || s[i]=='E'|| s[i]=='i' || s[i]=='I'|| s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            {
                c2++;
            }
        }
        if(c1==c2)
            return true;
        else return false;
        
    }
};