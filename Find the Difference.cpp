class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int str[26]={0}, str1[26]={0};
        for(int i=0;i<t.size();i++)
        {
            if(i<s.size())
            {
                str[s[i]-'a']++;
            }
            str1[t[i]-'a']++;
        }
        char c;
        for(int i=0;i<26;i++)
        {
            if(str[i]!=str1[i])
            {
                c=97+i;
                break;
            }
        }
        return c;
    }
};
