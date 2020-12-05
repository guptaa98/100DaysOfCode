class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(n==0)
        {
            return true;
        }
        int i=0,count = 0;
        while(i<flowerbed.size())
        {
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]!=1) && (i==flowerbed.size()-1 || flowerbed[i+1]!=1))
            {
                flowerbed[i]=1;
                count++;
            }
            i++;
        }
        if(count>=n)
        {
            return true;       
        }
        return false;
    }
};
