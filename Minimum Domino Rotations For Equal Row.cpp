class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) 
    {
        int ca[7]={0};
        int cb[7]={0};
        int sm[7]={0};
        for(int i=0;i<A.size();i++)
        {
            ca[A[i]]++;
            cb[B[i]]++;
            if(A[i]==B[i])
            {
                sm[A[i]]++;
            }
        }
        int res = A.size();
        for(int i=1;i<=6;i++)
        {
            if(ca[i]+cb[i]-sm[i] == A.size())
            {
                res = min(res,min(ca[i],cb[i])-sm[i]);
            }
        }
        if(res==A.size())
        {
            return -1;
        }
        return res;
    }
};
