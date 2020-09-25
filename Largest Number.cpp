class Solution {
public:
    static bool func(int a, int b)
    {
        string x = to_string(a);
        string y = to_string(b);
        if(x+y>y+x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string largestNumber(vector<int>& nums) 
    {
        string k;
        sort(nums.begin(),nums.end(),func);
        for(int i=0;i<nums.size();i++)
        {
            k+=to_string(nums[i]);
        }
        int i=0;
        while(i<k.size()-1)
        {
            if(k[i]=='0')
            {
                k.erase(0,1);
            }
            else
            {
                break;
            }
        }
        return k;
    }
};
