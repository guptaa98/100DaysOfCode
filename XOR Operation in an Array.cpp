class Solution {
public:
    int xorOperation(int n, int start) 
    {
        vector<int>nums;
        for(int i=0;i<n;i++)
        {
            int n=start + (2*i);
            nums.push_back(n);
        }
        int k=0;
        for(int i=1;i<n;i++)
        {
            nums[0]=nums[0] ^ nums[i];
        }
        k=nums[0];
        return k;
    }
};
