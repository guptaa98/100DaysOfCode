class Solution {
public:
    void generate(vector<string>&s,int o,int c,string op)
    {
        if(o==0 && c==0)
        {
            s.push_back(op);
            return;
        }
        if(o!=0)
        {
            string op1=op;
            op1.push_back('(');
            generate(s,o-1,c,op1);
        }
        if(c>o)
        {
            string op2=op;
            op2.push_back(')');
            generate(s,o,c-1,op2);
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> k;
        int open=n;
        int close=n;
        string str="";
        generate(k,open,close,str);
        return k;
    }
};
