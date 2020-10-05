class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        if(k>nums.size())
        {
            k=k%nums.size();
        }
        if(nums.size()>1)
        {
        vector<int>temp;
        int j=nums.size()-k;
        int t=k;
        while(t--)
        {
            temp.push_back(nums[j]);
            j++;    
        }
        for(int i=0;i<nums.size()-k;i++)
        {
            temp.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<temp.size();i++)
        {
            nums.push_back(temp[i]);
        }
        temp.clear();
        }
    }
};
