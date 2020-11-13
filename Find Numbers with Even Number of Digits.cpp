class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int even=0;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            int c=0;
            while(n>0)
            {
                int digit=n%10;
                c++;
                n=n/10;
            }
            if(c%2==0)
            {
                even++;
            }
            c=0;
        }
        return (even);
    }
};
