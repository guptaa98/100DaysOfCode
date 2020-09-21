class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        vector<pair<int,int>>t;
        for(int i=0;i<trips.size();i++)
        {
            t.push_back( make_pair (trips[i][1],trips[i][0]) );
            t.push_back( make_pair (trips[i][2],-trips[i][0]) );
        }
        int c=0;
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++)
        {
            c=c+t[i].second;
            if(c>capacity)
            {
                return false;
            }
        }
        return true;
    }
};
