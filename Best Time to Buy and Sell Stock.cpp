class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size()==1 || prices.size()==0)
        {
            return 0;
        }
        if(is_sorted(prices.begin(),prices.end()))
        {
            return (prices[prices.size()-1]-prices[0]);
        }
        int cp=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            cp=min(prices[i],cp);
            profit=max(profit,prices[i]-cp);
        }
        return profit;
    }
};
