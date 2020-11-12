class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) 
    {
        vector<vector<int> > matrix( n , vector<int> (m, 0));
        for(int i=0;i<indices.size();i++)
        {
            int ri=indices[i][0];
            int ci=indices[i][1];
            for(int j=0;j<m;j++)
            {
                matrix[ri][j]++;
            }
            for(int j=0;j<n;j++)
            {
                matrix[j][ci]++;
            }
        }
        int odd=0;
        for(int r=0;r<n;r++)
        {
            for(int c=0;c<m;c++)
            {
                if(matrix[r][c]%2!=0)
                {
                    odd++;
                }
            }
        }
        return odd;
    }
};
