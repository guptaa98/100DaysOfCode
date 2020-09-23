class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return 0;
        }
        int m=INT_MIN,sum=0,tsum=0;
        for(int i=0;i<nums.size();i++)
        {
            m=max(m,nums[i]);
            tsum+=nums[i];
            if(tsum<0)
            {
                tsum=0;
            }
            sum=max(tsum,sum);
        }
        if(m<0)
        {
            return m;
        }
        return sum;
    }
};
