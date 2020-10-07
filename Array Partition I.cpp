class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        //vector<int> nums2;
        int sum=0;
        sort(nums.begin(),nums.end());
        //int sum=nums[0]+nums[nums.size()/2];
        for(int i=0;i<nums.size();i=i+2)
        {
            sum=sum+nums[i];
        }
        return sum;
    }
};
