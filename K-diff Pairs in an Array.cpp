class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        if(nums.size()==0 || nums.size()==1)
        {
            return 0;
        }
        if(k==0)
        {
            int pair=0;
            if(nums[0]==nums[nums.size()-1])
            {
                return 1;
            }
            unordered_map<signed int,signed int>mp;
            for(int i=0;i<nums.size();i++)
            {
                mp[nums[i]]++;
            }
            for(auto a:mp)
            {
                if(a.second>1)
                {
                    pair++;
                }
            }
            return pair;
        }
        if(k>0)
        {
            set<int>setnums;
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++)
            {
                setnums.insert(nums[i]);
            }
            nums.clear();
            vector<int>newnums{setnums.begin(),setnums.end()};
            int pair=0;
            for(int i=0;i<newnums.size();i++)
            {
                int l=i,r=newnums.size()-1;
                while(l<r)
                {
                    if(abs(newnums[l]-newnums[r])>k)
                    {
                        r--;
                    }
                    else if(abs(newnums[l]-newnums[r])<k)
                    {
                        l++;
                    }
                    else if(abs(newnums[l]-newnums[r])==k)
                    {
                        pair++;
                        l++;
                    }
                }
            }
            return pair;
        }
        return 0;
    }
};
