class Solution {
public:
    int add(int n)
    {
        int sum=0;
        while(n>0)
        {
            int digit=n%10;
            sum+=digit;
            n=n/10;
        }
        return sum;
    }
    int addDigits(int num) 
    {
        int sum=0;
        if(num<=9)
        {
            return num;
        }
        while(num>9)
        {
            sum=add(num);
            num=sum;
        }
        return sum;
    }
};
