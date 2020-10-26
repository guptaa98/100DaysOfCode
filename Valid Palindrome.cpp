class Solution {
public:
    bool isPalindrome(string s) 
    {
        if(s.empty())
        {
            return true;
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string n;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122 || s[i]>= 48 && s[i]<=57)
            {
                n.push_back(s[i]);
            }
        }
        string revn = n;
        reverse(n.begin(),n.end());
        //cout<<revn;
        if(n == revn)
        {
            return true;
        }
        return false;
    }
};
