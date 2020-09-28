class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k==0)
        {
            return 0;
        }
        int p=1;
        int e=0;
        int s=0;
        int c=0;
        while(e<nums.size())
        {
            p*=nums[e];
            while (s<nums.size() && p>=k)
            {
                p=p/nums[s];
                s++;
            }
            if (p<k)
            {
                c+=(e-s)+1;
            }
            e++;
        }
        return c;
    }
};
