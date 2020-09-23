class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        int n=1;
        for(int i=1;i<=nums.size();i++)
        {
            n*=i;
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> permutevec;
        for(int i=0;i<n;i++)
        {
            next_permutation(nums.begin(),nums.end());
            permutevec.push_back(nums);
        }
        return permutevec;
    }
};
