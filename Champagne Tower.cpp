class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) 
    {
        double glass[102][102];
        glass[0][0] = poured;
        for (int i = 0 ; i <= query_row ; i++)
        {
            for(int j = 0 ; j <= i ; j++)
            {
                if(glass[i][j]>1)
                {
                    double left = glass[i][j] - 1;
                    glass[i][j] = 1;
                    glass[i+1][j] += left/2;
                    glass[i+1][j+1] += left/2;
                }
            }
        }
        return glass[query_row][query_glass];
    }
};
