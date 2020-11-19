class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) 
    {
        sort(a.begin(), a.end());
        int i = 0;
        for (int j = 1; j < a.size(); j++)
        {
            if (a[j][0] > a[i][1])
            {
                a[++i] = a[j];
            }
            else
            {
                a[i][1] = max(a[i][1], a[j][1]);
            }
        }
        int n = a.size();
        while (--n > i) 
        {
            a.pop_back();
        }
        return a;
    }
};
