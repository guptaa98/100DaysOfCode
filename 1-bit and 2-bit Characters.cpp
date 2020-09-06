class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) 
    {
        int i;
        //int n=bits.size();
        for(i=0;i<bits.size()-1;)
        {
            if(bits[i]==0)
            {
                i++;
            }
            else if(bits[i]==1)
            {
                i=i+2;
            }
        }
        if(i==bits.size()-1)
        {
            return true;
        }
        return false;
    }
};
