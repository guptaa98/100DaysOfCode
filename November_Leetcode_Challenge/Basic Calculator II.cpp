class Solution {
public:
    int calculate(string s) 
    {
        int currentnum=0;
        char operation = '+';
        stack<int>stk;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                while(isdigit(s[i]))
                {
                    currentnum = (currentnum*10) + (s[i]-'0');
                    i++;
                }
            }
            if(!iswspace(s[i]) && !isdigit(s[i]) || i == s.size()-1) 
            {
                if (operation == '+')
                {
                    stk.push(currentnum);
                }
                else if(operation == '-')
                {
                    stk.push(-currentnum);
                }
                else if(operation == '*')
                {
                    int top = stk.top();
                    stk.pop();
                    stk.push(top*currentnum);
                }
                else if(operation == '/')
                {
                    int top = stk.top();
                    stk.pop();
                    stk.push(top/currentnum);
                }
                operation = s[i];
                currentnum=0;
            }
        }
        int result = 0;
        while(stk.size() != 0)
        {
            result += stk.top();
            stk.pop();
        }
        return result;
    }
};
