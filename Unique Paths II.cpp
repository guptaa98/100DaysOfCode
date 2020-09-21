class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int r=obstacleGrid.size();
        int c=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[r-1][c-1]==1)
        {
            return 0;
        }
        if(obstacleGrid.size()==0)
        {
            return 0;
        }
        if(obstacleGrid.size()==1 && obstacleGrid[0].size()==1)
        {
            if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1]==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        vector<vector<int>>dp(r,vector<int>(c,0));
        dp[0][0]=(obstacleGrid[0][0]==1 ? 0:1);
        for(int i=1;i<obstacleGrid.size();i++)
        {
            dp[i][0]=(obstacleGrid[i][0]==0 && dp[i-1][0]>0 ? 1:0);
        }
        for(int i=1;i<c;i++)
        {
            dp[0][i]=(obstacleGrid[0][i]==0 && dp[0][i-1]>0 ? 1:0);
        }
        for(int i=1;i<obstacleGrid.size();i++)
        {
            for(int j=1;j<obstacleGrid[i].size();j++)
            {
                dp[i][j]=(obstacleGrid[i][j]==1 ? 0:dp[i-1][j]+dp[i][j-1]);
            }
        }
        return dp[r-1][c-1];
    }
};
