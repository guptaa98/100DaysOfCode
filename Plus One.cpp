class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        if(digits.size()==0)
        {
            return digits;
        }
        if(digits[digits.size()-1]<9)
        {
            digits[digits.size()-1]+=1;
            return digits;
        }
        if(digits.size()==1)
        {
            if(digits[0]==9)
            {
                digits.clear();
                digits.push_back(1);
                digits.push_back(0);
                return digits;
            }
            else
            {
                digits[0]+=1;
                return digits;
            }
        }
        int i = digits.size()-2;
        digits[digits.size()-1] += 1;
        int carry = (digits[digits.size()-1]/10);
        digits[digits.size()-1] = digits[digits.size()-1]%10;
        while(i>=0 || carry)
        {            
            digits[i] = (digits[i]+carry);
            carry = (digits[i]/10);
            digits[i] = digits[i]%10;
            i--;
            if(carry && i<0)
            {
                vector<int>newnum;
                newnum.push_back(carry);
                carry = 0;
                for(int i=0;i<digits.size();i++)
                {
                    newnum.push_back(digits[i]);
                }
                return newnum;
            }
        }
        return digits;
    }
};
