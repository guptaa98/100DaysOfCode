class Solution {
public:
    int maxPower(string s) 
    {
        if(s.size()==1)
        {
            return 1;
        }
        char ch = s[0];
        int count = 1;
        int maxcount = count;
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == ch)
            {
                count++;
            }
            else if(s[i]!=ch)
            {
                ch = s[i];
                count = 1;
            }
            maxcount = max(count,maxcount);
        }
        return maxcount;
    }
};
