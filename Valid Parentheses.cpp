class Solution {
public:
    bool isValid(string s) 
    {
        if(s.size()<2)
        {
            return false;
        }
        stack<char>stk;
        int count_open = 0, count_closed = 0;
        for(int i = 0; i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                stk.push(s[i]);
                count_open++;
            }
            else if (s[i]==')' || s[i]==']' || s[i]=='}')
            {
                if(stk.empty())
                {
                    return false;
                }
                char top = stk.top();
                count_closed++;
                if(s[i]==')' && top != '(')
                {
                    return false;
                }
                else if(s[i]==']' && top != '[')
                {
                    return false;
                }
                else if(s[i]=='}' && top != '{')
                {
                    return false;
                }
                else
                    stk.pop();
            }
        }
        if(count_open == count_closed)
        {
            return true;
        }
        return 0;
    }
};
