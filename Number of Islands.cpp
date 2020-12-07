class Solution {
public:
    void check_neighbors(vector<vector<char>>&matrix,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1')
        {
            return;
        }
        matrix[x][y] = '2';
        check_neighbors(matrix,x+1,y,r,c);
        check_neighbors(matrix,x-1,y,r,c);
        check_neighbors(matrix,x,y+1,r,c);
        check_neighbors(matrix,x,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int r = grid.size();
        if(r==0)
        {
            return 0;
        }
        int total_islands = 0;
        int c = grid[0].size();
        for(int i = 0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    total_islands++;
                    check_neighbors(grid,i,j,r,c);
                }
            }
        }
        return total_islands;
    }
};
