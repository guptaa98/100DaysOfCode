class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int>klarge;
        for(int i=0;i<nums.size();i++)
            klarge.push(nums[i]);
        while(k>1)
        {
            klarge.pop();
            k--;
        }
        return klarge.top();
    }
};
