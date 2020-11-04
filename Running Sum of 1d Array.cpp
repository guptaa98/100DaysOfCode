class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        if(nums.size()==0)
        {
            return nums;
        }
        else
        {
        vector<int>sum;
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                total=total+nums[j];
            }
            sum.push_back(total);
            total=0;
        }
        return sum;
        }
    }
};
