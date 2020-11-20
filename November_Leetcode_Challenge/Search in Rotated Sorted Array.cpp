class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        vector< pair <int,int> > v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back( make_pair(i,nums[i]) );
        }
        if(nums.size()==1)
        {
            if (nums[0] == target)
            {
                return 0;
            }
            else
                return -1;
        }
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid] == target)
            {
                for(int i=0;i<v.size();i++)
                {
                    if(v[i].second==target)
                    {
                        return v[i].first;
                    }
                }
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
        return -1;
    }
};
