class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        int c=0;
        vector<int> count;
        if(nums.size()==0)
        {
            return nums;
        }
        else
        {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i && nums[j]<nums[i])
                {
                    c++;
                }
            }
            count.push_back(c);
            c=0;
        }
        return count;
        }
    }
};
