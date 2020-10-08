class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l=0,r=nums.size()-1;
        int mid=(l+r)/2;
        while(l<=r)
        {
            if(target<nums[mid])
            {
                mid=mid-1;
                r=mid;
            }
            else if(target>nums[mid])
            {
                mid+=1;
                l=mid;
            }
            else if(target==nums[mid])
            {
                return mid;
            }
        }
        return -1;
    }
};
