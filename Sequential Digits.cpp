class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int>ans;
        int temp=0;
        for(int i=1;i<=9;i++)
        {
            temp=i;
            for(int j=i+1;j<=9;j++)
            {
                temp=(temp*10)+j;
                if(temp>=low && temp<=high)
                {
                    ans.push_back(temp);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
