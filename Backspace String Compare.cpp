class Solution {
public:
    bool backspaceCompare(string S, string T) 
    {
        string ns,nt;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='#')
            {
                ns.push_back(S[i]);
            }
            else if(ns.size()>0)
            {
                ns.pop_back();
            }
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i]!='#')
            {
                nt.push_back(T[i]);
            }
            else if(nt.size()>0)
            {
                nt.pop_back();
            }
        }
        if(ns==nt)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
