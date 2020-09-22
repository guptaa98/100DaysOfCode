class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return nums;
        }
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int n=floor(nums.size()/3);
        nums.clear();
        for(auto i:freq)
        {
            if(i.second>n)
            {
                nums.push_back(i.first);
            }
        }
        return nums;
    }
};
