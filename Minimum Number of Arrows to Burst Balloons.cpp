class Solution {
public:
    static bool sortbyend(vector<int>x1,vector<int>x2)
    {
        return(x1[1]<x2[1]);   #sorting the array on the basis of end point 
    }
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        if(points.size()==0)
        {
            return 0;
        }
        if(points.size()==1)
        {
            return 1;
        }
        int arrow=1; #minimum arrow required will be 1
        sort(points.begin(),points.end(),sortbyend);
        int ped=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=ped)    #overlapping condition
            {
                continue;
            }
            else
            {
                arrow++;
                ped=points[i][1];
            }
        }
        return arrow;
    }
};
