class Solution {
public:
    vector<int> partitionLabels(string S) 
    {
        vector<int>ans;
        if(S.size()==0)
        {
            return ans;
        }
        vector<int>lastp(26,-1);
        for(int i=S.size()-1;i>=0;i--)
        {
            if(lastp[S[i]-'a']==-1)
            {
                lastp[S[i] - 'a']=i;
            }
        }
        int minp = -1;
        int len = 0;
        for(int i=0;i<S.size();i++)
        {
            int lp=lastp[S[i]-'a'];
            minp=max(minp,lp);
            len++;
            if (i == minp)
            {
                ans.push_back(len);
                minp = -1;
                len = 0;
            }
        }
        return ans;
    }
};
