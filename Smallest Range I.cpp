class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) 
    {
        sort(A.begin(),A.end());
        int max = A[A.size()-1];
        int min = A[0];
        max -= K;
        min += K;
        int diff = max - min ;
        if (diff>0)
        {
            return diff;
        }
        return 0;
    }
};
