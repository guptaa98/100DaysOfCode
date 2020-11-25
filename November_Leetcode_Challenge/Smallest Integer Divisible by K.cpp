class Solution {
public:
    int smallestRepunitDivByK(int K) 
    {
        if(K%2==0 || K%5==0)
        {
            return -1;
        }
        int num = 0;
        int len = 1;
        for(len = 1 ; len<= K ;len++)
        {
            num = ((num*10)+1)%K;
            if(num % K ==0)
            {
                return len; 
            }
        }
        return -1;
    }
};
