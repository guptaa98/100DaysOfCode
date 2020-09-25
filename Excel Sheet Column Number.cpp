class Solution {
public:
    int titleToNumber(string s) 
    {
        int sum=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            sum+=(s[i]-64)*pow(26,i);
        }
        return sum;
    }
};
