class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        if(nums.size()==1)
        {
            if (nums[0] == target)
            {
                return true;
            }
            else
                return false;
        }
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid] == target)
            {
                return true;
            }
            if(target<nums[mid])
            {
                r = mid-1;
            }
            else if(target>nums[mid])
            {
                l = mid + 1;
            }
        }
        return false;
    }
};
