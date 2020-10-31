class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        if(nums.size()==0)
        {
            return (nums);
        }
        vector<int>newarray;
        int i,j;
        for(i=0,j=n;j<nums.size();j++,i++)
        {
            newarray.push_back(nums[i]);
            newarray.push_back(nums[j]);
        }
        return (newarray);
    }
};
