class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        int x=num;
        int r=0;
        while(num!=0)
        {
            r=r*10+num%10;
            num=num/10;
        }
        int rev_num=0;
        while(r!=0)
        {
            rev_num=rev_num*10+r%10;
            r=r/10;
        }
        if(rev_num==x)
            return true;
        else return false;
    }
};