class Solution {
    public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>>triplets;
        if(nums.size()==0 || nums.size()<3)
        {
            return triplets;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if (i > 0 and nums[i] == nums[i-1])
            {
                continue;
            }
            int j,k;
            for(j=i+1,k=nums.size()-1;j<nums.size();)
            {
                if(j==k)
                {
                    break;
                }
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    triplets.push_back({nums[i],nums[j],nums[k]});
                    int last_left=nums[j];
                    int last_right=nums[k];
                    while(j<k && nums[j]==last_left)
                    {
                        j++;
                    }
                    while(j<k && nums[k]==last_right)
                    {
                        k--;
                    }
                }
                else if (nums[i]+nums[j]+nums[k]<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return triplets;
    }
};
