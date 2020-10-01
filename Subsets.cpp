class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>subs;
        for(int i=0;i<pow(2,nums.size());i++)
        {
            vector<int>v;
            int j=0,num=i,k=nums.size();
            while(k&&j<nums.size())
            {
                if(num&1)
                {
                    v.push_back(nums[j]);
                }
                j++;
                k--;
                num=num>>1;
            }
            subs.push_back(v);
        }
        return subs;
    }
};
