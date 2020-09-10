class Solution {
public:
    int arrangeCoins(int n) 
    {
        unsigned long long int c=1;
        unsigned long long int cs=1;
        int step=1;
        while(cs<=n)
        {
            c++;
            cs=cs+c;
            step++;
        }
        return step-1;
    }
};
