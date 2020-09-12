class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>temp;
        vector<int>tempnums;
        tempnums=nums;
        sort(tempnums.begin(),tempnums.end());
        int l=0,r=nums.size()-1,n1,n2,i;
        while(l<r)
        {
            if(target==tempnums[l]+tempnums[r])
            {
                n1=(tempnums[l]);
                n2=(tempnums[r]);
                break;
            }
            if(target>tempnums[l]+tempnums[r])
            {
                l=l+1;
            }
            else if (target<tempnums[l]+tempnums[r])
            {
                r=r-1;
            }
        }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==n1)
            {
                temp.push_back(i);
                nums[i]=-1;
                break;
            }
        }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==n2)
            {
                temp.push_back(i);
                break;
            }
        }
        return temp;
    }
};
