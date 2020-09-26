class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) 
    {
        if(timeSeries.size()==0)
        {
            return 0;
        }
        else if(timeSeries.size()==1)
        {
            return duration;
        }
        int d=duration;
        for(int i=1;i<timeSeries.size();i++)
        {
            if(abs(timeSeries[i-1]-timeSeries[i])<duration)
            {
                d+=abs(timeSeries[i-1]-timeSeries[i]);
            }
            else
            {
                d+=duration;
            }        
        }
        return d; 
    }
};
