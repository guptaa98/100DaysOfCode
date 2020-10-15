class Solution {
public:
    bool buddyStrings(string A, string B) 
    {
        if(A.size()!=B.size() || A.empty() || A.size()<2) 
        {
            return false;
        }
        if(A==B)
        {
            unordered_map<char,int>mp;
            for(int i=0;i<A.size();i++)
            {
                mp[A[i]]++;
                if(mp[A[i]]>1)
                {
                    return true;
                }
            }
            return false;
        }
        else
        {
            int diff=-1;
            int mismatch = 0;
            for(int i=0;i<A.size();i++)
            {
                if(A[i]!=B[i])
                {
                    if(diff==-1)
                    {
                        diff = i;
                    }
                    else
                    {
                        char temp = A[diff];
                        A[diff] = A[i];
                        A[i] = temp;
                        return (A==B);
                    }
                }
            }
        }
        return 0;
    }
};
