class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        if(nums.size() < 3)
        {
            return false;
        }
        int i;
        vector<int>minnum(nums.size(),INT_MAX);
        minnum[0]=nums[0];  
        for(i=1 ; i<nums.size() ; i++)
        {
            minnum[i]=min(nums[i],minnum[i-1]);
        }
        stack<int>stk;
        for(i=nums.size()-1 ; i>=0 ; i--)
        {
            if(nums[i] > minnum[i])
            {
                while(!stk.empty() && minnum[i]>=stk.top())
                {
                    stk.pop();
                }
                if(!stk.empty() && nums[i]>stk.top())
                {
                    return true;
                }
                stk.push(nums[i]);
            }
        }
        return false;
    }
};
