class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) 
    {
        sort(tokens.begin(),tokens.end());
        int power = P;
        int score = 0;
        int ans=0;
        int i = 0;
        int j = tokens.size()-1;
        bool flag = true;
        while(i<=j && flag)
        {
            flag = false;
            while(i<=j && power>=tokens[i])
            {
                power-=tokens[i];
                score++;
                flag = true;
                i=i+1;
            }
            ans = max(score,ans);
            while (i<=j && power<tokens[j] && score>0)
            {
                power += tokens[j];
                j-=1;
                score--;
                flag = true;
            }
        }
        return ans;
    }
};
