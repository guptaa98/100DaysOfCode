class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) 
    {
        int carry=0;
        vector<int>add;
        int i=A.size()-1;
        while(i>=0 || carry>0 || K>0)
        {
            if(K!=0)
            {
                carry=carry+(K%10);
                K=K/10;
            }
            if(i>=0)
            {
                carry=carry+A[i];
                i--;
            }
            add.push_back(carry%10);
            carry=carry/10;
        }
        reverse(add.begin(),add.end());
        return add;
    }
};
