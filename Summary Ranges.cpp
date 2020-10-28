class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string>str;
        if(nums.size()==0)
        {
            return str;
        }
        if(nums.size()==1)
        {
            str.push_back(to_string(nums[0]));
            return str;
        }
        int a=nums[0];
        int b=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+1 == nums[i])
            {
                b=nums[i];
            }
            else if(nums[i-1]+1 != nums[i])
            {
                if(a!=b)
                {
                    string k=to_string(a);
                    k+="-";
                    k+=">";
                    k+=to_string(b);
                    str.push_back(k);
                }
                else if(a==b)
                {
                    str.push_back(to_string(a));
                }
                a=nums[i];
                b=nums[i];
            }
        }
        if(a!=b)
        {
            string k=to_string(a);
            k+="-";
            k+=">";
            k+=to_string(b);
            //cout<<k;
            str.push_back(k);
        }
        else if(a==b)
        {
            str.push_back(to_string(a));
        }
        return str;
    }
};
