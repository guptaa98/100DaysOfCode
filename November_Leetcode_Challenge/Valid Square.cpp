class Solution {
public:
    int distance(vector<int>a1,vector<int>a2)
    {
        int length=(pow((a1[0]-a2[0]),2)+pow((a1[1]-a2[1]),2));
        return length;
    }
    bool isSame(vector<int>p1, vector<int> p2) 
    {
        return (p1[0] == p2[0] && p1[1] == p2[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        set<int>s;
        if (isSame(p1,p2) || isSame(p1,p3) || isSame(p1,p4) || isSame(p2,p3) || isSame(p3,p4) || isSame(p2,p4)) 
        {
            return false;
        } 
        s.insert(distance(p1,p2));
        s.insert(distance(p1,p3));
        s.insert(distance(p1,p4));
        s.insert(distance(p2,p3));
        s.insert(distance(p2,p4));
        s.insert(distance(p3,p4));

        return (s.size()==2);
    }
};
