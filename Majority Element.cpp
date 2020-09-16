class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>float(nums.size()/2))
            {
                return nums[i];
                break;
            }
        }
        return 0;
    }
};
