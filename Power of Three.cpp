class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n==1)
        {
            return true;
        }
        unsigned long long int power = 3;
        if(n<0)
        {
            return false;
        }
        while(power<=n)
        {
            if(power==n)
            {
                return true;
            }
            else
            {
                power*=3; 
            }
        }
        return false;
    }
};
