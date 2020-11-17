class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int cr,cl,count;
        cr=cl=0;
        count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                cl++;
            }
            if(s[i]=='R')
            {
                cr++;
            }
            if(cl==cr)
            {
                count++;
                cr=cl=0;
            }
        }
        return count;
    }
};
