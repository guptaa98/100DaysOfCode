class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int sj=0;
        for(int i=0;i<J.size();i++)
        {
            for(int j=0;j<S.size();j++)
            {
                if(S[j] == J[i])
                {
                    sj++;
                }
            }
        }
        return sj;
    }
};
