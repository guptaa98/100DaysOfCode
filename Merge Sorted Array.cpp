class Solution {
public:
    vector<int>show(vector<int>&nums)
    {
        return nums;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int j=m;
        for (int i=0;i<n;i++)
        {
            nums1[j]=nums2[i];
            j++;
        }
        sort(nums1.begin(),nums1.end());
        show(nums1);
    }
};
