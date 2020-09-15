class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        if(s.size()==0)
        {
            return 0;
        }
        int c,i;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                break;
            }
            else
            {
                c++;
            }
        }
        if(c>0)
        {
            s.erase(i+1,c);
        }
        c=0;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                c++;
            }
            if(s[i]==' ')
            {
                break;
            }
        }
        return c;
    }
};
