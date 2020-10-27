class Solution {
public:
    bool isPowerOfFour(int num) 
    {
        if(num == 1)
        {
            return true;
        }
        unsigned long long int power = 4;
        if(num<0)
        {
            return false;
        }
        while(power<=num)
        {
            if(power == num)
            {
                return true;
            }
            else
            {
                power*=4;
            }
        }
        return false;
    }
};
