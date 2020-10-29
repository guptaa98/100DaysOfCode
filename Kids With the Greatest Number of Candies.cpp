class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
         vector<bool>t;
        if(candies.size()==0)
        {
            t.push_back(false);
            return t;
        }
        else
        {
        int maxc=0;
        for (int i=0;i<candies.size();i++)
        {
            maxc=max(candies[i],maxc);
        }
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>=maxc)
            {
                t.push_back(true);
            }
            else
            {
                t.push_back(false);
            }
        }
        return t;
        }
    }
};
