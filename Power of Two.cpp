class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n == 1)
        {
            return true;
        }
        unsigned long long int power = 2;
        if(n<0)
        {
            return false;
        }
        while(power<=n)
        {
            if(power == n)
            {
                return true;
            }
            else
            {
                power*=2;
            }
        }
        return false;
    }
};
