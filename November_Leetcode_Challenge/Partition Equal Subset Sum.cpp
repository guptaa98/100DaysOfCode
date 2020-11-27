class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum{0};
        for(int i = 0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        if(sum % 2 != 0)
        {
            return false;
        }
        int subsetsum = sum/2;
        vector<bool>dp(subsetsum+1,false);
        dp[0] = true;
        for (int i = 0; i<nums.size(); i++)
        {
            int curr = nums[i];
            for(int j = subsetsum ; j>=curr ; j--)
            {
                dp[j] = dp[j] || dp[j-curr];
            }
        }
        return dp[subsetsum];
    }
};
